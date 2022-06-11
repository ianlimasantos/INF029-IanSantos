#include <stdio.h>

//gcc bolo.c -o bolo

void numero_decrescente (int numero){
  printf (" %d\n", numero);

  if (numero > 0){
    numero--;
    numero_decrescente(numero);      
  }
}

int main() {

  int numero = 7;
  
  numero_decrescente(numero);

  return 0;
}

