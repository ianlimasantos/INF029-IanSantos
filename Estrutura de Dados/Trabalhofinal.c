#include <stdio.h>
#include <stdlib.h>

// gcc Trabalhofinal.c -o trabalhofinal

struct tipo
{
  char nome[20];
	int quantidade;
  int valor;
	struct tipo *prox;

};

typedef struct tipo bolsa_de_valores;

bolsa_de_valores* inserir_lista(bolsa_de_valores *lista, char *nome, int *qtd, int *valor)
{
	bolsa_de_valores* novo = malloc(sizeof(bolsa_de_valores));
	novo->nome = nome;
  novo->quantidade = qtd;
  novo->valor = valor; 
	novo->prox = lista;
	return novo;
}

/*
void consultar_lista(bolsa_de_valores *inicio)
{

	bolsa_de_valores *referencia;

	for(referencia= inicio;referencia!= NULL; referencia=referencia->prox)
		printf("%d\n", referencia->info);
	
}
*/

int main() {

	bolsa_de_valores *lista;
	lista = NULL;
  int opcao=0, elemento=0;
  char nome [20];
	int valor_add, valor, qtd;
  int requer = 1;
  int add, i;

    
    do {
    printf ("Digite o valor que você quer inserir na lista: ");
    scanf ("%s", nome);
    printf ("Digite a quantidade que você deseja adicionar a lista: ");
    scanf ("%d", &qtd);
    printf ("Digite o valor: ");
    scanf ("%d", &valor);
    
    lista = inserir_lista(lista, nome, &qtd, &valor);
    
    for (i = 1; i == 0 || i ==1; ){
    printf ("Você deseja adicionar outro numero? 0 - Não || 1 - Sim\n");
    scanf ("%d", &add);
    switch (add){
        case 0: 
            i = 2;
            requer = 0;
            break;
        case 1: 
            i = 2;
            break;
        default: 
        printf ("Valor inválido. Digite novamente.");
        
        }
    }
    
    } while (requer == 1);
	
    return 0;
}

//consultar_lista(lista);