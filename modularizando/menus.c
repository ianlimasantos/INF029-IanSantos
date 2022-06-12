#include <stdio.h>
#include <stdlib.h>
#include "acoes.h"

int menu_principal (){
   
    int resposta_principal;
    printf ("## ESCOLHA A OPÇÃO DESEJADA ##\n");
    printf("1 - Cadastrar ações para venda.\n");
    printf("2 - Cadastrar ações para compra.\n");
    printf("3 - Listar títulos.\n");
    printf("4 - Sair.\n");
    scanf("%d", &resposta_principal);
    system("cls || clear");
    return resposta_principal;
}

int menu_compra (){
   
    int resposta_principal;
    printf ("## ESCOLHA A OPÇÃO DESEJADA - COMPRA ##\n");
    printf("1 - Cadastrar PETR4.\n");
    printf("2 - Cadastrar VALE5.\n");
    printf("3 - Cadastrar LAME3.\n");
    printf("4 - Sair.\n");
    scanf("%d", &resposta_principal);
    system("cls || clear");
   
    return resposta_principal;
}

int menu_venda (){
   
    int resposta_principal;
    printf ("## ESCOLHA A OPÇÃO DESEJADA -  VENDA ##");
    printf("1 - Cadastrar PETR4.\n");
    printf("2 - Cadastrar VALE5.\n");
    printf("3 - Cadastrar LAME3.\n");
    printf("4 - Sair.\n");
    scanf("%d", &resposta_principal);
    system("cls || clear");
   
    return resposta_principal;
}