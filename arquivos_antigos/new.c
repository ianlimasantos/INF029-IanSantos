#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#define POS 0

// gcc new.c -o new

int main (){
  
  int *p[TAM];
  int posicao, qtd, quantidade, i;
  
  for (i = 0; i < TAM; i++){
    p[i] = NULL;
  }

  printf ("Digite que posição você quer adicionar: ");
  scanf ("%d", &posicao);

  printf ("Digite quantos espaços de memória você quer: ");
  scanf ("%d", &qtd);

  p[posicao] = (int*) malloc (qtd * sizeof(int));
/*
  for (i = 0; i < qtd; i++){
  p[posicao][i] = NULL;
  }
*/
  for (i = 0; i < qtd; i++){
  printf ("Digite o valor que você quer armazenar:");
  scanf ("%d", &p[posicao][i]);
  }

   printf ("Digite que posição você quer adicionar: ");
  scanf ("%d", &posicao);

  printf ("Digite quantos espaços de memória você quer: ");
  scanf ("%d", &quantidade);

  p[posicao] = (int*) malloc (quantidade * sizeof(int));
/*
  for (i = 0; i < qtd; i++){
  p[posicao][i] = NULL;
  }
*/
  for (i = 0; i < quantidade; i++){
  printf ("Digite o valor que você quer armazenar:");
  scanf ("%d", &p[posicao][i]);
  }

  for (i = 0; i < qtd; i++){
  printf ("Valor armazenado - %d \n", p[1][i]);
 
  }

  for (i = 0; i < quantidade; i++){
  printf ("Valor armazenado - %d \n", p[5][i]);
 
  }


  if (p[1] == NULL){
    printf ("Não tem.");
    
  }
  else{
  for (i = 0; i < quantidade; i++){
  printf ("Valor armazenado - %d \n", p[1][i]);
 
  }
  }
}