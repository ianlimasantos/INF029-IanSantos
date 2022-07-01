#include <stdio.h>

//gcc questao1.c -o questao1

float fatorial(int n);

int main (){

  float valor;
  int n;
  
  printf ("Digite o valor:");
  scanf ("%d", &n);
  valor = fatorial(n); 
  printf ("O resultado é %f", valor);
}

float fatorial (int n){

  if (n == 1){
    return 1;
  }
  else{ 
    return n * fatorial (n-1);
  }
   
}