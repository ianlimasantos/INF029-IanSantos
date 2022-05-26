#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#include "EstruturaVetores.h"


struct dados{
  int *vetorPrincipal;
  int quantidade_de_elementos;
  int tamanho; 
}
estrutura[TAM];

void inicializar(){
  int i;
  for (i = 0; i<TAM ; i++){
    estrutura[i].vetorPrincipal = NULL;
  }
}

int inserirNumeroEmEstrutura(int posicao, int tamanho){
  int retorno;
  
  if (estrutura[posicao].vetorPrincipal != NULL)
      retorno = JA_TEM_ESTRUTURA_AUXILIAR;
    else if (posicao>10 || posicao<1)
      retorno = POSICAO_INVALIDA;
    /// PENSAR NESSE CASO if (sizeof(tamanho)>
    else if (tamanho < 1)
      retorno = TAMANHO_INVALIDO;
    else if (estrutura[posicao].vetorPrincipal == NULL)
      retorno = SEM_ESTRUTURA_AUXILIAR;
    else {
      retorno = SUCESSO;
    }
  return retorno;
}

int criarEstruturaAuxiliar(int posicao, int tamanho)
{
  int i; 
  if (estrutura[posicao].vetorPrincipal != NULL)
    return JA_TEM_ESTRUTURA_AUXILIAR;
  else if (posicao>10 || posicao<1)
    return POSICAO_INVALIDA;
  else if (tamanho < 1)
    return TAMANHO_INVALIDO;
  else {
    estrutura[posicao].vetorPrincipal = (int*) malloc(tamanho * sizeof(int));
    estrutura[posicao].tamanho = tamanho;
    estrutura[posicao].quantidade_de_elementos = 0;
    
    return SUCESSO;
    }
}

int inserirNumeroEstrutura(int posicao, int valor)
{
    int i, j, retorno;
    
    if (posicao>10 || posicao<1)
        retorno = POSICAO_INVALIDA;
    else
    {
        // testar se existe a estrutura auxiliar
        if (estrutura[posicao].vetorPrincipal != NULL)
        {
            if (estrutura[posicao].quantidade_de_elementos < estrutura[posicao].tamanho)
            {
              estrutura[posicao].vetorPrincipal[estrutura[posicao].quantidade_de_elementos] = valor;
              estrutura[posicao].quantidade_de_elementos ++;    
              retorno = SUCESSO;
            }
           else
            {
                retorno = SEM_ESPACO;
            }
          
        } else
        {
          retorno = SEM_ESTRUTURA_AUXILIAR;
        }
  
    }
     


    return retorno;
}

int excluirNumeroDoFinaldaEstrutura(int posicao)
{

  
}