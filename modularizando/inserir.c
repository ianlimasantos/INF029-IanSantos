#include <stdio.h>
#include <stdlib.h>
#include "acoes.h"

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

void inserirNoFinalSemCabecote(No **inicioSemCabecote){
    No *novo;
    No *atual;

    novo = criarElemento();

    if(*inicioSemCabecote == NULL)
        *inicioSemCabecote = novo;
    else{
        atual = *inicioSemCabecote;

        while(atual->proximo != NULL)
            atual = atual->proximo;

        atual->proximo = novo;
    }
}