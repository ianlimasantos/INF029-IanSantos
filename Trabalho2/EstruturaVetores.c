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

int inserirNumeroEmEstrutura(int posicao, int valor)
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
  int retorno;

    if (posicao>10 || posicao<1)
        retorno = POSICAO_INVALIDA;
    else
    {
        // testar se existe a estrutura auxiliar
        if (estrutura[posicao].vetorPrincipal != NULL)
        {
            if (estrutura[posicao].quantidade_de_elementos > 0)
            {
              estrutura[posicao].quantidade_de_elementos --;    
              retorno = SUCESSO;
            }
           else
            {
                retorno = ESTRUTURA_AUXILIAR_VAZIA;
            }
          
        } else
        {
          retorno = SEM_ESTRUTURA_AUXILIAR;
        }
  
    }

    return retorno;
}

/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar da posição 'posicao'.
Caso seja excluido, os números posteriores devem ser movidos para as posições anteriores
ex: suponha os valores [3, 8, 7, 9,  ,  ] onde deve ser excluido o valor 8. A estrutura deve ficar da seguinte forma [3, 7, 9,  ,  ,  ]
Obs. Esta é uma exclusão lógica
Rertono (int)
    SUCESSO - excluido com sucesso 'valor' da estrutura na posição 'posicao'
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    NUMERO_INEXISTENTE - Número não existe
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/

int excluirNumeroEspecificoDeEstrutura(int posicao, int valor)
{
  int i, j, retorno, achei;
  
if (posicao>10 || posicao<1)
        retorno = POSICAO_INVALIDA;
else
{
        // testar se existe a estrutura auxiliar
  if (estrutura[posicao].vetorPrincipal != NULL)
  {
    if (estrutura[posicao].quantidade_de_elementos > 0)
    {
      for(i = 0, achei = 0; i < estrutura[posicao].quantidade_de_elementos && achei == 0 ; i++){
        if (valor == estrutura[posicao].vetorPrincipal[i])
          achei = 1;   
      }

      if (achei = 1)
      {
      /*preservo o valor do i de cima*/
        for (  ; i <= estrutura[posicao].quantidade_de_elementos; i++){
          estrutura[posicao].vetorPrincipal[i] = estrutura[posicao].vetorPrincipal[i+1];
        }
          estrutura[posicao].quantidade_de_elementos--;
          retorno = SUCESSO;
      } else 
        retorno = NUMERO_INEXISTENTE;
              
              // VOU FAZER A BUSCA
              // SE A BUSCA  = NUMERO, ACHEI
              // SENÃO, NUMERO_INEXISTENTE
      }
      else
      {
        retorno = ESTRUTURA_AUXILIAR_VAZIA;
      }
          
  } 
  else
  {
    retorno = SEM_ESTRUTURA_AUXILIAR;
  }
  
}

    return retorno;
}



/*
// se posição é um valor válido {entre 1 e 10}
int ehPosicaoValida(int posicao)
{
    int retorno = 0;
    if (posicao < 1 || posicao > 10)
    {
        retorno = POSICAO_INVALIDA;
    }
    else
        retorno = SUCESSO;

    return retorno;
}

Objetivo: retorna os números da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux
Retorno (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar

int getDadosEstruturaAuxiliar(int posicao, int vetorAux[])
{

    int retorno = 0;

    return retorno;
}


Objetivo: retorna os números ordenados da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao (1..10)'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar

int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[])
{

    int retorno = 0;

    
    return retorno;
}


Objetivo: retorna os números de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    TODAS_ESTRUTURAS_AUXILIARES_VAZIAS - todas as estruturas auxiliares estão vazias

int getDadosDeTodasEstruturasAuxiliares(int vetorAux[])
{

    int retorno = 0;
    return retorno;
}


Objetivo: retorna os números ordenados de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    TODAS_ESTRUTURAS_AUXILIARES_VAZIAS - todas as estruturas auxiliares estão vazias

int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[])
{

    int retorno = 0;
    return retorno;
}


Objetivo: modificar o tamanho da estrutura auxiliar da posição 'posicao' para o novo tamanho 'novoTamanho' + tamanho atual
Suponha o tamanho inicial = x, e novo tamanho = n. O tamanho resultante deve ser x + n. Sendo que x + n deve ser sempre >= 1
Rertono (int)
    SUCESSO - foi modificado corretamente o tamanho da estrutura auxiliar
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    NOVO_TAMANHO_INVALIDO - novo tamanho não pode ser negativo
    SEM_ESPACO_DE_MEMORIA - erro na alocação do novo valor

int modificarTamanhoEstruturaAuxiliar(int posicao, int novoTamanho)
{

    int retorno = 0;
    return retorno;
}


Objetivo: retorna a quantidade de elementos preenchidos da estrutura auxiliar da posição 'posicao'.
Retorno (int)
    POSICAO_INVALIDA - posição inválida
    SEM_ESTRUTURA_AUXILIAR - sem estrutura auxiliar
    ESTRUTURA_AUXILIAR_VAZIA - estrutura auxiliar vazia
    Um número int > 0 correpondente a quantidade de elementos preenchidos da estrutura

int getQuantidadeElementosEstruturaAuxiliar(int posicao)
{

    int retorno = 0;

    return retorno;
}


Objetivo: montar a lista encadeada com cabeçote com todos os números presentes em todas as estruturas.
Retorno (No*)
    NULL, caso não tenha nenhum número nas listas
    No*, ponteiro para o início da lista com cabeçote

No *montarListaEncadeadaComCabecote()
{

    return NULL;
}


Objetivo: retorna os números da lista enceada com cabeçote armazenando em vetorAux.
Retorno void

void getDadosListaEncadeadaComCabecote(No *inicio, int vetorAux[])
{
}


Objetivo: Destruir a lista encadeada com cabeçote a partir de início.
O ponteiro inicio deve ficar com NULL.
Retorno 
    void.

void destruirListaEncadeadaComCabecote(No **inicio)
{
}


Objetivo: inicializa o programa. deve ser chamado ao inicio do programa 


void inicializar()
{
}


Objetivo: finaliza o programa. deve ser chamado ao final do programa 
para poder liberar todos os espaços de memória das estruturas auxiliares.


void finalizar()
{
}
*/