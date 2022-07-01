#include <stdio.h>
#include <stdlib.h>
#include "acoes.h"



void inserirparaVENDER(No **inicioSemCabecote){
  No *novo;
  No *atual;
  No *anterior;

  novo = criarElemento();

  if(*inicioSemCabecote == NULL)
    *inicioSemCabecote = novo;    
  else if(novo->valor < (*inicioSemCabecote)->valor){ // é o menor?
            novo->proximo = *inicioSemCabecote;
            *inicioSemCabecote = novo;
  }
  else
  {
    atual = *inicioSemCabecote;
    anterior = *inicioSemCabecote;

    while (atual!=NULL && novo->valor > atual->valor){
      anterior = atual;
      atual = atual->proximo;
    }
    novo->proximo = atual;
    anterior->proximo = novo;
     
  }
    
  }

void inserir_oferta_para_COMPRAR(No **inicioSemCabecote){
  No *novo;
  No *atual;
  No *anterior;


  novo = criarElemento();

  if(*inicioSemCabecote == NULL)
    *inicioSemCabecote = novo;
  else if(novo->valor > (*inicioSemCabecote)->valor){ 
    novo->proximo = *inicioSemCabecote;
    *inicioSemCabecote = novo;
  }
  else
  {
    atual = *inicioSemCabecote;
    anterior = *inicioSemCabecote;

    while (atual!=NULL && novo->valor < atual->valor){
      anterior = atual;
      atual = atual->proximo;
    }
    
    anterior->proximo = novo;
    novo->proximo = atual; 
  }

}

No* criarElemento(){
  int valor, quantidade;
  int variavel;
  FILE *pont;
  No *novo = (No *)malloc(sizeof(No));
  printf("Quer adicionar arquivo? 0 - NÃO | 1 - SIM ");
  scanf ("%d", &variavel);
  if(variavel == 0){
  printf("Digite a quantidade de títulos:");
  scanf("%d", &quantidade);
  printf("Digite o valor dos títulos:");
  scanf("%d", &valor);
    
//	No *novo = (No *)malloc(sizeof(No));
	if(novo == NULL){
        printf("Falta Memoria\n");
        exit(1);
	}
	novo->quantidade = quantidade;
  novo->valor = valor;
	novo->proximo = NULL;
	return novo;
  }

  else {
    printf("*************");
    pont = fopen("arquivo.txt","r");
    fscanf(pont,"%d%d",&quantidade, &valor);
  //  fscanf(pont,"%d%d",&quantidade, &valor);
    printf("a quantidade vale %d", quantidade);
    novo->quantidade = quantidade;
    novo->valor = valor;
	  novo->proximo = NULL;
    
	  return novo;
  }
}

