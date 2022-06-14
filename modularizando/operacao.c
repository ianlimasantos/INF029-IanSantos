#include <stdio.h>
#include <stdlib.h>
#include "acoes.h"

void realizar_operacao(No **vendendo, No **comprando){
  
  No *venda, *compra, *atual, *anterior;
  venda = *vendendo;
  compra = *comprando;
  int auxiliar;
  if (*vendendo!=NULL && *comprando != NULL){
    if (compra->valor >= venda->valor){
        auxiliar = compra->quantidade;
        venda->quantidade-= compra->quantidade;
        compra->quantidade-= auxiliar;
        printf ("Operação realizada!");
        printf ("Quantidade venda: %d \n quantidade compra: %d",venda->quantidade, compra->quantidade );
      free(venda);
     }  
    }
}

/*void realizar_operacao(No **vendendo, No **comprando){
  
  No *venda, *compra, *atual, *anterior;
  venda = *vendendo;
  compra = *comprando;
  int auxiliar;
  if (*vendendo!=NULL && *comprando != NULL){
    while (compra->valor>=venda->valor){
      auxiliar = venda->quantidade;
      venda->quantidade -= compra->quantidade;
      if (venda->quantidade<=0){
        compra->quantidade-= auxiliar;
        free(&venda);
        printf ("Operação realizada!");
      }  
    }
  } 
}*/