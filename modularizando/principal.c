#include <stdio.h>
#include <stdlib.h>
#include "acoes.h"

// gcc inserir.c listar.c menus.c operacao.c principal.c -o mercado

int menu_principal();
int menu_compra();
int menu_venda();
No* criarElemento();
int menu_listar();
void inserirparaVENDER(No **inicioSemCabecote);
void inserir_oferta_para_COMPRAR(No **inicioSemCabecote);
void realizar_operacao(No **vendendo, No **comprando);
void excluirElemento(No** inicio, int valor);


int main(){
   
  int menu_princ;
  int menu_comp, menu_vend, opcao_listar;
  char string1[] = "PETR4";
  char string2[] = "VALE5";
  char string3[] = "LAME3";
   
  No *inicioListaPetr4Compra = NULL;
  No *inicioListaVALE5Compra = NULL;
  No *inicioListaLAME3Compra = NULL;
  No *inicioListaPetr4Venda = NULL;
  No *inicioListaVALE5Venda = NULL;
  No *inicioListaLAME3Venda = NULL;
   
  do{
      menu_princ = menu_principal();
      switch (menu_princ)
      {
          case 1:
            do{
                  menu_vend = menu_venda();
             //   menu_comp = menu_compra();
                  switch (menu_vend)
                  {
                      case 1:
                        inserirparaVENDER(&inicioListaPetr4Venda);
                        break;
                      case 2:
                        inserirparaVENDER(&inicioListaVALE5Venda);
                        break;
                      case 3:
                        inserirparaVENDER(&inicioListaLAME3Venda);
                        break;
                      case 4:
                        printf("Voltar\n");
                        break;
                  }
                 
              }while (menu_vend!=4);
              break;
          case 2:
              do{
                  menu_comp = menu_compra();
                  switch (menu_comp)
                  {

                      case 1:
                          inserir_oferta_para_COMPRAR (&inicioListaPetr4Compra);
                          if (inicioListaPetr4Compra != NULL)
                            realizar_operacao(&inicioListaPetr4Venda, &inicioListaPetr4Compra);
                          break;
                      case 2:
                          inserir_oferta_para_COMPRAR (&inicioListaVALE5Compra);
                      if (inicioListaVALE5Compra != NULL)
                        realizar_operacao(&inicioListaVALE5Venda, &inicioListaVALE5Compra);
                          break;
                      case 3:
                          inserir_oferta_para_COMPRAR (&inicioListaLAME3Compra);
                          break;
                      case 4:
                          printf("Voltar\n");
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
                        listarElementos(inicioListaPetr4Compra, inicioListaPetr4Venda, string1);
                      
                        break;
                    case 2:
                        listarElementos(inicioListaVALE5Compra, inicioListaVALE5Venda, string2);
                        break;
                    case 3:
                        listarElementos(inicioListaLAME3Compra, inicioListaLAME3Venda, string3);
                        break;
                    case 4:
                        printf("Voltar\n");
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