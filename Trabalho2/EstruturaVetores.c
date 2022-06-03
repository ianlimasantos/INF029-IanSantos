
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
  int i, retorno, achei;
  
if (posicao>10 || posicao<1)
        retorno = POSICAO_INVALIDA;
else
{
        // testar se existe a estrutura auxiliar
  if (estrutura[posicao].vetorPrincipal != NULL)
  {
    if (estrutura[posicao].quantidade_de_elementos > 0)
    {
      for(i = 0, achei = 0; i < estrutura[posicao].quantidade_de_elementos && achei == 0; i++){
        if (valor == estrutura[posicao].vetorPrincipal[i])
          achei = 1;   
          
      }
      
      if (achei == 1)
      {
      /*preservo o valor do i de cima*/
        for ( i = i-1; i < estrutura[posicao].quantidade_de_elementos; i++){
          estrutura[posicao].vetorPrincipal[i] = estrutura[posicao].vetorPrincipal[i+1];
          //printf (" valor: %d  ----", estrutura[posicao].vetorPrincipal[i]);
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
*/
int getDadosEstruturaAuxiliar(int posicao, int vetorAux[])
{

    int i, retorno;
    
    if (posicao>10 || posicao<1)
        retorno = POSICAO_INVALIDA;
    else
    {
        // testar se existe a estrutura auxiliar
        if (estrutura[posicao].vetorPrincipal != NULL)
        {
          if (estrutura[posicao].quantidade_de_elementos > 0){
          for (i = 0; i < estrutura[posicao].quantidade_de_elementos; i++){
           vetorAux[i] = estrutura[posicao].vetorPrincipal[i]  ;
          }
          retorno = SUCESSO;
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

Objetivo: retorna os números ordenados da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao (1..10)'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/

int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[])
{
  
  int i, j, retorno, auxiliar;
    
    if (posicao>10 || posicao<1)
        retorno = POSICAO_INVALIDA;
    else
    {
        // testar se existe a estrutura auxiliar
        if (estrutura[posicao].vetorPrincipal != NULL)
        {
          if (estrutura[posicao].quantidade_de_elementos > 0){
           // for para fazer o vetor auxiliar assumir os valores
            for (i = 0; i < estrutura[posicao].quantidade_de_elementos; i++)
              vetorAux[i] = estrutura[posicao].vetorPrincipal[i];
            // ordenação
            for (i = 0; i < estrutura[posicao].quantidade_de_elementos; i++){
            for (j = i + 1; j < estrutura[posicao].quantidade_de_elementos; j++){
              if (vetorAux[i] > vetorAux[j]){
                auxiliar = vetorAux[i];
                vetorAux[i] = vetorAux[j];
                vetorAux[j] = auxiliar;
              }
            }
          }
            retorno = SUCESSO;
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

Objetivo: retorna os números de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    TODAS_ESTRUTURAS_AUXILIARES_VAZIAS - todas as estruturas auxiliares estão vazias
*/
int getDadosDeTodasEstruturasAuxiliares(int vetorAux[])
{

  int i, contador = 0;
  int j, retorno;
  
  for (i = 0; i<TAM; i++){

    if (estrutura[i].vetorPrincipal != NULL){
      
      if (estrutura[i].quantidade_de_elementos > 0){
       // for para fazer o vetor auxiliar assumir os valores
        for (j = 0; j < estrutura[i].quantidade_de_elementos; j++){
          vetorAux[contador] = estrutura[i].vetorPrincipal[j];
          contador++;
        }
      }
    }
      
  }

  if (contador > 0)
    retorno = SUCESSO;
  else
    retorno = TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;


  return retorno;

}
  
/*

Objetivo: retorna os números ordenados de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    TODAS_ESTRUTURAS_AUXILIARES_VAZIAS - todas as estruturas auxiliares estão vazias
*/ 

int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[])
{

  int i, auxiliar, contador = 0;
  int j, retorno = 0;
  
  for (i = 0; i<TAM; i++){

    if (estrutura[i].vetorPrincipal != NULL){
      
      if (estrutura[i].quantidade_de_elementos > 0){
       // for para fazer o vetor auxiliar assumir os valores
        for (j = 0; j < estrutura[i].quantidade_de_elementos; j++){
          vetorAux[contador] = estrutura[i].vetorPrincipal[j];
          contador++;
        }
      }
    }
      
  }

  if (contador>0){
    for (i = 0; i < contador; i++){
      for (j = i + 1; j < contador; j++){
        if (vetorAux[i] > vetorAux[j]){
          auxiliar = vetorAux[i];
          vetorAux[i] = vetorAux[j];
          vetorAux[j] = auxiliar;
        }
      }
    }
  }
  
  if (contador > 0)
    retorno = SUCESSO;
  else
    retorno = TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;

  return retorno;
}

/*
Objetivo: modificar o tamanho da estrutura auxiliar da posição 'posicao' para o novo tamanho 'novoTamanho' + tamanho atual
Suponha o tamanho inicial = x, e novo tamanho = n. O tamanho resultante deve ser x + n. Sendo que x + n deve ser sempre >= 1
Rertono (int)
    SUCESSO - foi modificado corretamente o tamanho da estrutura auxiliar
   ok SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    ok POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    ok NOVO_TAMANHO_INVALIDO - novo tamanho não pode ser negativo
    SEM_ESPACO_DE_MEMORIA - erro na alocação do novo valor
*/
int modificarTamanhoEstruturaAuxiliar(int posicao, int novoTamanho)
{

    int retorno = 0;

    novoTamanho = novoTamanho + estrutura[posicao].tamanho;

    if (posicao>10 || posicao<1)
        retorno = POSICAO_INVALIDA;
    else
    {
      // testando se o tamanho é válido
      if (novoTamanho < 1){
        retorno = NOVO_TAMANHO_INVALIDO;
        return retorno;
      }
        // testar se existe a estrutura auxiliar
        if (estrutura[posicao].vetorPrincipal != NULL)
        {
         estrutura[posicao].vetorPrincipal = realloc(estrutura[posicao].vetorPrincipal, (novoTamanho * sizeof(int)));
          if (!estrutura[posicao].vetorPrincipal)
            retorno = SEM_ESPACO_DE_MEMORIA;
          else{
            estrutura[posicao].tamanho = novoTamanho;
            if (estrutura[posicao].tamanho < estrutura[posicao].quantidade_de_elementos)
              estrutura[posicao].quantidade_de_elementos = estrutura[posicao].tamanho;
            retorno = SUCESSO;
          }
            
        }       
         else
          retorno = SEM_ESTRUTURA_AUXILIAR;
    }



    return retorno;

  //vetorPrincipal[pos].vetorAuxiliar = realloc(vetorPrincipal[pos].vetorAuxiliar, sizeof(novotamanho+tam * int))
}

/*
Objetivo: retorna a quantidade de elementos preenchidos da estrutura auxiliar da posição 'posicao'.
Retorno (int)
    ok POSICAO_INVALIDA - posição inválida
    ok SEM_ESTRUTURA_AUXILIAR - sem estrutura auxiliar
    ESTRUTURA_AUXILIAR_VAZIA - estrutura auxiliar vazia
    Um número int > 0 correpondente a quantidade de elementos preenchidos da estrutura
*/

int getQuantidadeElementosEstruturaAuxiliar(int posicao)
{

    int retorno = 0;

    if (posicao>10 || posicao<1)
        retorno = POSICAO_INVALIDA;
    else
    {
        // testar se existe a estrutura auxiliar
        if (estrutura[posicao].vetorPrincipal != NULL)
        {
          if (estrutura[posicao].quantidade_de_elementos > 0){
            if (estrutura[posicao].tamanho < estrutura[posicao].quantidade_de_elementos)
              estrutura[posicao].quantidade_de_elementos = estrutura[posicao].tamanho;
              retorno = estrutura[posicao].quantidade_de_elementos;
          }
          else 
            retorno = ESTRUTURA_AUXILIAR_VAZIA;
        }else
          retorno = SEM_ESTRUTURA_AUXILIAR;
    } 
    return retorno;
}

/*
typedef struct reg {
    int conteudo;
    struct reg *prox;
} No;*/
/*
void inserirNaLista(int valor){
  no *novo,;
  novo = (No*) malloc(sizeof(no));
  novo->conteudo = valor;
  novo->prox = NULL;
  
  if (cabecote == NULL)
  {
    no = cabecote;
    cabecote = novo;
    atual = cabecote;
  }
  else{
    do{
      
    }while (atual->prox!=NULL)
  }

  
}
*/

No* criarElemento(int valor){
	No *novo = (No *)malloc(sizeof(No));
	if(novo == NULL){
        printf("Falta Memoria\n");
        exit(1);
	}
	novo->conteudo = valor;
	novo->prox = NULL;
	return novo;
}


void inserirNoFinalComCabecote(No *inicio, int val){

	No* tmp;
	No* novo = criarElemento(val);

	if(inicio->prox == NULL){
		inicio->prox = novo;
	}
	else{
		tmp = inicio->prox;

		while(tmp->prox != NULL)
			tmp = tmp->prox;

		tmp->prox = novo;
	}
}


/*
Objetivo: montar a lista encadeada com cabeçote com todos os números presentes em todas as estruturas.
Retorno (No*)
    NULL, caso não tenha nenhum número nas listas
    No*, ponteiro para o início da lista com cabeçote
*/

No *montarListaEncadeadaComCabecote()
{
  int i, j, retorno, contador;
  No *cabecote = (No*) malloc(sizeof(No));  
  
  
  for (i = 0; i < TAM; i++){
    if (estrutura[i].vetorPrincipal != NULL){
      if (estrutura[i].quantidade_de_elementos > 0){
        contador++;
       // for para fazer a lista encadeada assumir os valores
        for (j = 0; j < estrutura[i].quantidade_de_elementos; j++)
        {
          inserirNoFinalComCabecote(cabecote, estrutura[i].vetorPrincipal[j]); 
        }
      }
    }
      
  }

  if (contador > 0)
    return cabecote;
  else
    return NULL;
}


/*Objetivo: retorna os números da lista enceada com cabeçote armazenando em vetorAux.
Retorno void
*/
void getDadosListaEncadeadaComCabecote(No *inicio, int vetorAux[])
{
  No *p;
  int index = 0;
  for (p = inicio->prox; p != NULL; p = p->prox)
    vetorAux[index++] = p->conteudo; 
}


/*Objetivo: Destruir a lista encadeada com cabeçote a partir de início.
O ponteiro inicio deve ficar com NULL.
Retorno 
    void.
*/
void destruirListaEncadeadaComCabecote(No **inicio)
{
  No* atual = *inicio;
	No* tmp;

	while(atual != NULL){
		tmp = atual->prox;
		free(atual);
		atual = tmp;
	}

  *inicio = NULL;
}



/*Objetivo: finaliza o programa. deve ser chamado ao final do programa 
para poder liberar todos os espaços de memória das estruturas auxiliares.
*/

void finalizar()
{
  int i;
  for (i = 0; i < TAM; i++){
    if (estrutura[i].vetorPrincipal != NULL)
        free (estrutura[i].vetorPrincipal);
    }
}
