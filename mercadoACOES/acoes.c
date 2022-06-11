#include <stdio.h>
#include <stdlib.h>
// gcc acoes.c -o acoes
typedef struct num{
  int quantidade;
  int valor;
  struct num *proximo;
} No;

int menu_principal();
int menu_compra();
int menu_venda();
int menu_listar ();
No* criarElemento();
void inserirNoFinalSemCabecote(No **inicioSemCabecote);
//No *inserir (No *lista, int valor, int quantidade);



/*
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
/*
int main()
{
    numeros *lista = NULL;
    int valor;
    int i = 0;
   
    do{
        printf ("Digite o valor:");
        scanf("%d", &valor);
        lista = inserir_lista(lista, valor);
       // free(valor);
        printf("Vai adicionar outro número a lista?");
        scanf ("%d", &i);
    }while (i==0);
   
    verlista(lista);
    return 0;
}

*/
No* criarElemento(){
  int valor, quantidade;
  printf("Digite a quantidade de títulos:");
  scanf("%d", &quantidade);
  printf("Digite o valor dos títulos:");
  scanf("%d", &valor);
	No *novo = (No *)malloc(sizeof(No));
	if(novo == NULL){
        printf("Falta Memoria\n");
        exit(1);
	}
	novo->quantidade = quantidade;
  novo->valor = valor;
	novo->proximo = NULL;
	return novo;
}


void inserirNoFinalSemCabecote(No **inicioSemCabecote){
    No *novo;
    No *atual;

    novo = criarElemento();

    if(*inicioSemCabecote == NULL)
        *inicioSemCabecote = novo;
    else{
        atual = *inicioSemCabecote;

        while(atual->proximo != NULL)
            atual = atual->proximo;

        atual->proximo = novo;
    }
}
void listarElementos(No* inicio){
	No *p;
	printf ("lista\n");
  for (p = inicio; p != NULL; p = p->proximo)
    printf ("Valor: %d - Quantidade: %d\n", p->valor, p->quantidade);
    
  
}


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

int menu_listar (){
   
    int resposta_principal;
    printf ("## ESCOLHA A OPÇÃO DESEJADA - Listar ##\n");
    printf("1 - Listar PETR4.\n");
    //printf("2 - Cadastrar VALE5.\n");
    //printf("3 - Cadastrar LAME3.\n");
    printf("4 - Sair.\n");
    scanf("%d", &resposta_principal);
    system("cls || clear");
   
    return resposta_principal;
}



int main (){
   
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
   
}



/* no main vou chamar a funcao e não vou botar parametro, mas vou retornar o ponteiro pra lá em cima ter acesso e depois eu pegar esse ponteiro e conseguir chamar uma função para imprimir*/
/*numeros *cadastrar_petr4(){
  int quantidade, valor;
  numeros *lista = NULL;
  
  printf("Digite a quantidade de títulos:");
  scanf("%d", &quantidade);
  printf("Digite o valor dos títulos:");
  scanf("%d", &valor);
  lista = inserir(lista, valor, quantidade);
  for (; lista!=NULL; lista = lista->proximo){
    printf("1. %d\n", lista->quantidade);
    printf("2. %d\n", lista->valor);
  
  }
  return lista;
}

numeros *inserir (numeros *lista, int valor, int quantidade){
  numeros *lista_local;
  lista_local = malloc(sizeof(numeros));
  lista_local->quantidade = quantidade;
  lista_local->valor = valor;
  lista_local->proximo = lista;

  return lista_local;
}*/