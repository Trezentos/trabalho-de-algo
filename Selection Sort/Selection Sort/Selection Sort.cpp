// Selection Sort.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include "string"
#include <ctime>

using namespace std;

int main()
{ 
  const int tamanho = 100000;
  int vetor[tamanho] = { tamanho }, i, j, min, x, contador=0, trocas = 0;
  time_t t;

  setlocale(LC_ALL, "portuguese");
   contador = tamanho;
  for (int indice = 0; indice < tamanho; indice++) {
    vetor[indice] = contador;
    contador--;
  }

  t = clock();
  for (i = 0; i <= tamanho-1; i++) { 
    min = i; //Aqui é selecionado a casa antecessor 
    for (j = i + 1; j <= tamanho-1; j++) {
      if (vetor[j] < vetor[min]) //E aqui o sucessor, que vai acessando as proximas casa e comparando com o antecessor
        min = j;                 //caso a condição seja satisfeita, a troca dos elementos acontece, caso contrário
    }                            //este que vai comparando com o mínimo vai se comparando com os proximos até que o 
                                 //vetor esteja totalmente ordenado.
    x = vetor[min];
    vetor[min] = vetor[i];
    vetor[i] = x;
    trocas++;
  }
  t = clock() - t;
 
  cout << "O tempo em segundos em um vetor de tamanho " << tamanho << " é de  ";
  cout << ((float)t) / CLOCKS_PER_SEC << " segundos. \n E o numero de trocas foram de "<< trocas<<" trocas \n";
  

    system("pause");
    return 0;
}

