#include <stdio.h>
#include <stdlib.h>
#include "acoes.h"


int menu_listar(){
   
    int resposta_principal;
    printf ("## ESCOLHA A OPÇÃO DESEJADA - Listar ##\n");
    printf("1 - Listar PETR4.\n");
    printf("2 - Listar VALE5.\n");
    printf("3 - Listar LAME3.\n");
    printf("4 - Voltar.\n");
    scanf("%d", &resposta_principal);
    system("cls || clear");
   
    return resposta_principal;
}

void listarElementos(No* inicio, No* outroinicio, char nome[]){
	No *p;
	printf ("AÇÕES A VENDA \n\n");
    printf (" Nome    Modalidade   Quantidade   Valor \n");
  for (p = inicio; p != NULL; p = p->proximo){
    printf (" %s        V           %d         %d\n", nome, p->quantidade, p->valor);
    }
  printf("\n \n");
	printf ("OFERTAS PARA COMPRAR \n\n");
    printf (" Nome    Modalidade   Quantidade   Valor \n");
  for (p = outroinicio; p != NULL; p = p->proximo)
    printf ("Valor: %d - Quantidade: %d\n", p->valor, p->quantidade);
}