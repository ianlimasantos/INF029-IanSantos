#include <stdio.h>
#include <stdlib.h>
#include "acoes.h"

// gcc principal.c menus.c listar.c inserir.c -o mercadoacoes


int menu_principal();
int menu_compra();
int menu_venda();
No* criarElemento();
int menu_listar();
void inserirNoFinalSemCabecote(No **inicioSemCabecote); 

int main(){
   
  int menu_princ;
  int menu_comp, menu_vend, opcao_listar;
   
  No *inicioListaPetr4Compra = NULL;
   
  do{
      menu_princ = menu_principal();
      switch (menu_princ)
      {
          case 1:
            do{
                  menu_comp = menu_compra();
                  switch (menu_comp)
                  {
                      case 1:
                        inserirNoFinalSemCabecote(&inicioListaPetr4Compra);
                        break;
                      case 2:
                        printf("Campo em construção\n");
                        break;
                      case 3:
                        printf("Campo em construção\n");
                        break;
                      case 4:
                        printf("Voltando...\n");
                        break;
                  }
                 
              }while (menu_comp!=4);
              break;
          case 2:
              do{
                  menu_vend = menu_venda();
                  switch (menu_vend)
                  {

                      case 1:
                          printf("--Calma\n");
                          break;
                      case 2:
                          printf("--Campo em construção\n");
                          break;
                      case 3:
                          printf("--Campo em construção\n");
                          break;
                      case 4:
                          printf("--Voltando...\n");
                          break;
                  }
                }while (menu_comp!=4);
              break;
          case 3:
            do{
                opcao_listar = menu_listar();
                switch (opcao_listar)
                {

                    case 1:
                        listarElementos(inicioListaPetr4Compra);
                        break;
                    case 2:
                        printf("--Campo em construção\n");
                        break;
                    case 3:
                        printf("--Campo em construção\n");
                        break;
                    case 4:
                        printf("--Voltando...\n");
                        break;
                }
              }while (opcao_listar != 4);
              break;
          case 4:
            printf("O sistema foi encerrado!");
            break;
     
      }
  }while (menu_princ!=4);
  
   return 0;
}