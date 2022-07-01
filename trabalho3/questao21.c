#include <stdio.h>

//gcc questao21.c -o questao21

int tribonacci (int valor){
    
  if (valor == 0 || valor == 1 ){
    return 0;
  }else if (valor == 2){
    return 1;
  }else
    return tribonacci(valor-1) + tribonacci(valor-2) + tribonacci(valor-3);
}


int main(){
    
  int numero = 0;
  
  printf("Informe a posição:\n");
  scanf("%d", &numero);
  printf("O Tribonacci é %d", tribonacci(numero));
  
}

