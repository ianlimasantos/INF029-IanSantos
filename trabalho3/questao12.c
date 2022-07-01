#include <stdio.h>

//gcc questao12.c -o q12
void numero_crescente(int valor);

int main(){
  int numero;
  
  printf("Digite o número: ");
  scanf("%d", &numero);
  
  numero_crescente(numero);
}

void numero_crescente(int valor){
  if (valor > 0)
    numero_crescente(valor - 1);
  
  printf("%d\n", valor);

}