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
void listarElementos(No* inicio);
void inserirNoFinalSemCabecote(No **inicioSemCabecote);
No* criarElemento();

#endif