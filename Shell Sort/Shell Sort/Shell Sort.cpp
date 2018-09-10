#include "stdafx.h"
#include "string"
#include <stdio.h>
#include <iostream>
#include <ctime>

using namespace std;

//Neste programa nos utilizamos o Shell Sort.



void shellsort(int *vet, int tamanho) {//Basicamente ele trabalha com o método de Inserction Sort,
  int i, j, value;
  int gap = 1;
  while (gap<tamanho) {
    gap = 3 * gap + 1;
  }
  while (gap > 1) {//mas ele separa em grupos menores e ordena cada grupo, assim ordenando todo o vetor.
    gap /= 3;
    for (i = gap; i < tamanho; i++) {
      value = vet[i];
      j = i - gap;
      while (j >= 0 && value < vet[j]) {
        vet[j + gap] = vet[j];
        j -= gap;
      }
      vet[j + gap] = value;
    }
  }
}
using namespace std;
int main()
{
  int const tamanho = 100000;
  int vetor[tamanho] = { 0 }, contador;
  time_t t;
  

  contador = tamanho;
  for (int indice = 0; indice < tamanho; indice++) {
    vetor[indice] = contador;
    contador--;
  }

  t = clock();
  shellsort(vetor, tamanho); //FUNÇÃO SENDO CHAMADA
  t = clock() - t;

  cout << "Tempo gasto em um vetor com " << tamanho << " elementos: " << ((float)t) / CLOCKS_PER_SEC << " segundos.";
  cout << "\n \n";
  system("pause");
  return 0;

}
