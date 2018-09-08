// Bubble Sorte.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>

#include <ctime>

using namespace std;
const int  tamanho =100000;

int bubble(int valor[], int i) {
  int aux = 0;

  for (int i = 0; i<tamanho; i++) {
    for (int x = i + 1; x < tamanho; x++) {
      if (valor[i] < valor[x]) {
        aux = valor[i];
        valor[i] = valor[x];
        valor[x] = aux;
      }
    }
  }

  return valor[i];
}

int main()
{
  int vetor[tamanho] = { 0 };
  clock_t t;

  t = clock();
  bubble(vetor, tamanho);
  t = clock() - t;

  cout << " O tempo gasto foi de: " << ((float)t)/CLOCKS_PER_SEC;

  cout << endl;
  system("pause");
  return 0;
}