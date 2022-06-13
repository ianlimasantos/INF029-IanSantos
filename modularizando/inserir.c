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
  else
  {
    atual = *inicioSemCabecote;
    anterior = *inicioSemCabecote;

    while (atual!=NULL && novo->valor < atual->valor){
      anterior = atual;
      atual = atual->proximo;
    }
    novo->proximo = atual;
    anterior->proximo = novo; 
  }
  }

No* criarElemento(){
  int valor, quantidade;
  printf("Digite a quantidade de títulos:");
  scanf("%d", &quantidade);
  printf("Digite o valor dos títulos:");
  scanf("%d", &valor);
	No *novo = (No *)malloc(sizeof(No));
	if(novo == NULL){
        printf("Falta Memoria\n");
        exit(1);
	}
	novo->quantidade = quantidade;
  novo->valor = valor;
	novo->proximo = NULL;
	return novo;
}

