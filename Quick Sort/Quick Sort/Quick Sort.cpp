﻿#include<stdio.h>
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

  int pivo, aux, i, j, meio;

  i = inicio;
  j = fim;

  meio = (int)((i + j) / 2);
  pivo = vetor[meio];

  do {
    while (vetor[i] < pivo) i = i + 1;
    while (vetor[j] > pivo) j = j - 1;

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

  
}