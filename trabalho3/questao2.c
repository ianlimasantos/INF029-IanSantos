#include <stdio.h>

int funcao_fibonacci(int n) {
  int x;
  
  if (n == 1) {
    return(1);
  }
  
  if (n == 2) {
    return(1);
  }
  
  x = funcao_fibonacci(n-1) + funcao_fibonacci(n-2);
  return(x);
}


int main() {
  int numero, contador;
  
  printf("Digite o numero: ");
  scanf("%d", &numero);
  
  
  for (contador = 1; contador <= numero; contador++) {
    printf("%d ", funcao_fibonacci(contador));
  }
  printf("\n");
  return(0);
}