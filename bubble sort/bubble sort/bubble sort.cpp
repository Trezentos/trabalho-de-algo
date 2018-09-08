// Bubble Sorte.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "string"
#include <iostream>
#include <stdio.h>
#include <ctime>

using namespace std;
const int  tamanho = 4;

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
  int vetor[tamanho] = { 0,1,3,4 };

  bubble(vetor, tamanho);

  for (int i = 0; i < tamanho; i++) {
    cout << vetor[i] << " ";
  }

  cout << endl;
  system("pause");
  return 0;
}