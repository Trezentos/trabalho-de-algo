// insert sort.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include "string"
#include <iostream>
#include <ctime>
using namespace std;

int main() {
  const int tamanho=100000;
  int notas[tamanho] = { 0 }, aux, contador = 0, trocas=0;
  time_t t;
  
  
  contador = tamanho;
  for (int indice = 0; indice < tamanho; indice++) {
    
    notas[indice] = contador;
    contador--;

  }
  t = clock();
  for (int i = 0; i<tamanho-1; i++) {
    for (int j = i + 1; j>0; j--) { //aqui o j vai acessar todos os indices junto com o i
      if (notas[j]  < notas[j - 1]) { // assim esse if vai pegar cada indice e comparar com o sucessor e satisfazer a 
                               // condição pegando o primeiro com o segundo, se feito a satisfação é trocado de lugar 
                               //então depois o terceiro, e assim secessivamente...
        aux = notas[j];
        notas[j] = notas[j - 1];
        notas[j - 1] = aux;
        trocas++;
      }
    }
  }
  t = clock() - t;
  
  

  cout << endl << "O tempo das trocas foram de " << ((float)t) / CLOCKS_PER_SEC << endl;
  cout << "O numero de trocas foram de: " << trocas << endl;

  system("pause");
    return 0;
}

