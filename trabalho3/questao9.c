#include <stdio.h>
#include <stdlib.h>

//gcc questao9.c -o questao9

int aux = 0;
int aux2 = 0;

int soma(int valor);


int main(){
    
  int numero;
  
  printf("Digite o número: ");
  scanf("%d",&numero);
  printf("O somatório vale %d", soma(numero));

    
}

int soma(int valor){
  if (valor > 0){
    aux = aux + valor;
    soma(valor-1);
  }
  else{
    aux2 = aux;
    aux = 0;
    return aux2;
  }
}