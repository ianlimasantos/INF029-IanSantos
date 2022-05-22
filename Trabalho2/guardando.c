#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#define POS 0

// gcc guardando.c -o guardando

int main (){
  
  int *p[TAM];
  int auxiliar[TAM][POS];
  int posicao, qtd, i;
  
  for (i = 0; i < TAM; i++){
    p[i] = NULL;
  }

  for (i = 0; i < TAM; i++){
    p[i] = &auxiliar[i][POS];   
  }

  
  printf ("Digite qual posição você deseja inserir: ");
  scanf ("%d", posicao);
  printf ("Digite a quantidade que você deseja de espaço: ");
  scanf ("%d", qtd);

  for (i = 0; i< qtd; i++){
    p[posicao] = &auxiliar[posicao][i];
    printf ("Posicao %posicao - Valor %d
      ")
  }

  
}
  /*

  for 
  printf ("Digite qual posição você deseja inserir:");
  scanf ("%d", posicao);
  printf ("Digite a quantidade que você deseja de espaço:");
  scanf ("%d", qtd);
    
  auxiliar[posicao] = (int*) malloc(qtd * sizeof(int));
}







int main(){

  int p[TAM][MAT];
  int i, numero_posicao, qtd_espaco;

  for (i = 0; i < TAM; i++){
    p[i][MAT] = NULL;
  }

  printf ("Digite qual posição você deseja inserir: ");
  scanf ("%d", &numero_posicao);
  printf ("Digite o valor que você deseja de espaço livre na posição 1");
  scanf ("%d", &qtd_espaco);

  p[numero_posicao][qtd_espaco] = malloc (qtd_espaco * sizeof(int));

  for(i = 0; i < qtd_espaco; i++){
    printf ("Digite um número:");
    scanf ("%d", &p[numero_posicao][i]);
  }
}
*/