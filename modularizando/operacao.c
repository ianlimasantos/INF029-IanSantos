#include <stdio.h>
#include <stdlib.h>
#include "acoes.h"

//void excluirElemento(No** inicio, int valor);

void realizar_operacao(No **vendendo, No **comprando){
  No *atualv, *anteriorv, *atualc, *anteriorc;
  No *venda, *compra;
  int auxiliar, venda_media;
  venda = *vendendo;
  compra = *comprando;
  //atualv = *vendendo;
  anteriorv = *vendendo;
//  atualc = *comprando;
  anteriorc = *comprando;
  
  while (compra != NULL  && venda!=NULL && compra->valor >= venda->valor){
    if (compra->quantidade > venda->quantidade){
      auxiliar = venda->quantidade;
    }
    else if (compra->quantidade < venda->quantidade){
      auxiliar = compra->quantidade;
    }
    else{ 
      auxiliar = compra->quantidade;
    }
    compra->quantidade -= auxiliar;
    venda->quantidade -= auxiliar; 
    if (compra->quantidade == 0){
      if (compra->valor == venda->valor){
        printf ("compra realizada");
        printf("________________________\n");
        printf("| A cotação é %d reais  |\n", venda->valor);
        printf("________________________\n");
        } 
      else{
        venda_media = (compra->valor + venda->valor)/2;
        printf ("A operação foi realizada por %d reais\n", venda_media);
        printf ("compra realizada pela média!\n");
        printf("________________________\n");
        printf("| A cotação é %d reais  |\n", venda_media);
        printf("________________________\n");
        }
      break;
  }    
}
  if (*comprando == NULL){
    return ;
  }

  No* anterior = *comprando;
  No* atual = *comprando;
  No* proximo = atual->proximo;
  int achou = 0;

  while (atual!= NULL){
    if (atual->quantidade == 0){
      achou = 1;
      break;
    }
    anterior = atual; 
    atual = proximo;
    if (atual!=NULL)
      proximo = atual->proximo;
  }

  if (achou == 1){
    if (atual == *comprando)
      *comprando = proximo;
  }
    else{
      anterior->proximo = atual->proximo;
    free (atual);
    return;
      }
  return;
}
      
      
      //break;
     // printf ("4\n");
     // free (anteriorc);
      //printf ("5\n");
      
    
  

  





/*
  
  
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