#include<stdio.h>
#include "stdafx.h"
#include "string"

const int tamanho = 10;
void Quick(int vetor[tamanho], int inicio, int fim);
int main() {

  int vetor[tamanho] = { 0 }, contador=0;

      contador = tamanho;
  for (int indice = 0; indice < tamanho; indice++) {
      
      vetor[indice] = contador;
      contador--;
  }

  int i;
  printf("Vetor decrescente:\n");
  for (i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  Quick(vetor, 0, tamanho-1); //FUNÇÃO DO QUICK COMEÇANDO

  printf("Vetor ordenado crescentemente:\n");
  for (i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");
  system("pause");
}

void Quick(int vetor[tamanho], int inicio, int fim) { 
  // A função pega o indice 0 e o ultinmo indice do vetor e o proprio vetor
  int pivo, aux, i, j, meio;

  i = inicio;
  j = fim;
  //E com o auxilio de uma equação que soma todos os indices e divide por dois, é encontrado o "pivo", no qual é o 
  //vetor[indice] do meio, para poder dividir o vetor em dois
  meio = (int)((i + j) / 2);
  pivo = vetor[meio];

  //abaixo o vetor é dividido em dois
  do {
    while (vetor[i] < pivo) i = i + 1; //a parte esquerda do vetor, enquanto não estiver organizado, a condição vai ser verdadeira
    while (vetor[j] > pivo) j = j - 1; //a parte direita do vetor acontece o mesmo caso, até que os dois vetores sejam ordenados

    if (i <= j) {
      aux = vetor[i];
      vetor[i] = vetor[j];
      vetor[j] = aux;
      i = i + 1;
      j = j - 1;
    }
  } while (j > i);

  if (inicio < j) Quick(vetor, inicio, j);
  if (i < fim) Quick(vetor, i, fim);

  //e assim o vetor escolhido será organizado com sucesso 
}