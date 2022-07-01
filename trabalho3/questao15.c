#include <stdio.h>

//gcc questao15.c -o q15

void numero_decrescente (int numero){
  printf ("%d\n", numero);

  if (numero > 0){
    numero-=2;
    numero_decrescente(numero);      
  }
}

int main(){
  int numero = 1;        
  while (numero%2!=0){
  printf ("Digite um número: ");
  scanf ("%d", &numero);
  }
  numero_decrescente(numero);

  return 0;
}
