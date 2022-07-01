#include <stdio.h>

//gcc questao13.c -o q13

void numero_decrescente (int numero){
  printf ("%d\n", numero);

  if (numero > 0){
    numero--;
    numero_decrescente(numero);      
  }
}

int main(){
  
  int numero;
  printf ("Digite um número: ");
  scanf ("%d", &numero);
  
  numero_decrescente(numero);

  return 0;
}
