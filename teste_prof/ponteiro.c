#include <stdio.h>
#include <stdlib.h>

typedef struct num{
    int digito;
    struct num *proximo;
} numeros;

numeros *inserir_lista (numeros *fazendo_lista, int valor){
   
    numeros *lista_definitiva;
    lista_definitiva = malloc(sizeof(numeros));
    lista_definitiva->digito = valor;
    lista_definitiva->proximo = fazendo_lista;
   
    return lista_definitiva;
}


void verlista (numeros *lista){
   
    for( ; lista!=NULL; lista = lista->proximo){
        printf ("%d\n", lista->digito);
    }
}

int main()
{
    numeros *lista = NULL;
    //numeros *valor = NULL;
    int valor;
    int i = 0;
   
    do{
        //valor = malloc(sizeof(numeros));
        printf ("Digite o valor:");
        scanf("%d", &valor/*->digito*/);
      //  valor->proximo = lista;
        lista = inserir_lista(lista, valor);
        //free(valor);
        printf("Vai adicionar outro número a lista?");
        scanf ("%d", &i);
    }while (i==0);
   
    verlista(lista);
    return 0;
}