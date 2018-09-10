#include "string"
#include <iostream>
#include <ctime>
#include "stdafx.h"


int trocas=0;
void CombSort(int* data, int count) {
  double gap = count;
  bool swaps = true;

  while (gap > 1 || swaps)
  {
    gap /= 1.247330950103979;

    if (gap < 1)
      gap = 1;

    int i = 0;
    swaps = false;

    while (i + gap < count)
    {
      int igap = i + (int)gap;

      if (data[i] > data[igap])
      {
        int temp = data[i];
        data[i] = data[igap];
        data[igap] = temp;
        swaps = true;
      }

      ++i;
    }
  }
}

using namespace std;
int main()
{
  int const tamanho = 100;
  int vetor[tamanho] = { 0 }, contador;
  time_t t;


  contador = tamanho;
  for (int indice = 0; indice < tamanho; indice++) {
    vetor[indice] = contador;
    contador--;
  }

  t = clock();
  CombSort(vetor, tamanho); //FUNÇÃO SENDO CHAMADA
  t = clock() - t;

  cout << "Tempo gasto em um vetor com " << tamanho << " elementos: " << ((float)t) / CLOCKS_PER_SEC << " segundos.\n";

  cout << "E o numero de trocas foram de: " << trocas;
  system("pause");
  return 0;

}