#include <stdio.h>
#include <stdlib.h>
#include "acoes.h"

int menu_listar(){
   
    int resposta_principal;
    printf ("## ESCOLHA A OPÇÃO DESEJADA - Listar ##\n");
    printf("1 - Listar PETR4.\n");
    //printf("2 - Cadastrar VALE5.\n");
    //printf("3 - Cadastrar LAME3.\n");
    printf("4 - Sair.\n");
    scanf("%d", &resposta_principal);
    system("cls || clear");
   
    return resposta_principal;
}

void listarElementos(No* inicio){
	No *p;
	printf ("lista\n");
  for (p = inicio; p != NULL; p = p->proximo)
    printf ("Valor: %d - Quantidade: %d\n", p->valor, p->quantidade);
  
}