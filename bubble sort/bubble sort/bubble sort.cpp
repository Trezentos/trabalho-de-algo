// Bubble Sorte.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>

#include <ctime>

using namespace std;
const int  tamanho = 100000;

int main()
{
  int aux = 0, trocas = 0, contador = 0;
  int vetor[tamanho] = {0};
  clock_t t;

  for (int indice = 0; indice < tamanho; indice++) {
    vetor[indice] = contador;

    contador++;
  }

  t = clock();
  for (int i = 0; i<tamanho; i++) {
    for (int x = i + 1; x < tamanho; x++) {
      if (vetor[i] < vetor[x]) {
        aux = vetor[i];
        vetor[i] = vetor[x];
        vetor[x] = aux;
        trocas++;
      }
    }
  }
  t = clock() - t;

  cout << " O tempo gasto foi de: " << ((float)t)/CLOCKS_PER_SEC<<endl;
  cout << "E o numeros de trocas foi de: " << trocas;
  cout << endl;
  system("pause");
  return 0;

}