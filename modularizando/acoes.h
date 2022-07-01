#ifndef MODULARIZANDO_ACOES_H
#define MODULARIZANDO_ACOES_H

typedef struct num{
  int quantidade;
  int valor;
  struct num *proximo;
} No;

int menu_principal ();
int menu_compra ();
int menu_venda ();
int menu_listar ();
void listarElementos(No* inicio, No* outroinicio, char nome[]);
void inserirparaVENDER(No **inicioSemCabecote);
void inserir_oferta_para_COMPRAR(No **inicioSemCabecote);
No* criarElemento();
void excluirElemento(No** inicio, int valor);
void  realizar_operacao(No **vendendo, No **comprando);


#endif