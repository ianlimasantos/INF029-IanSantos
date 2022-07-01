#include <stdio.h>

//gcc questao14.c -o q14
void numero_crescente(int valor);

int main(){
  int numero = 1;
  while (numero%2!=0){
  printf("Digite o número: ");
  scanf("%d", &numero);
  }
  numero_crescente(numero);
}

void numero_crescente(int valor){
  if (valor > 0)
    numero_crescente(valor - 2);
  
  printf("%d\n", valor);

}