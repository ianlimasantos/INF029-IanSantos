#include <stdio.h>

int soma();
int subtracao();
int multiplicacao();

int main (){

  int a, b, mult1, mult2, fim;
  printf ("Digite o primeiro valor: ");
  scanf ("%d", &a);
  printf ("Digite o segundo valor: ");
  scanf ("%d",&b);
  mult1 = soma(a,b);
  mult2 = subtracao(a,b);
  fim = multiplicacao (mult1, mult2);
  printf (" O resultado é %d", fim);

}

int soma (int c, int d) {

  int resultado;
  resultado = c + d;
  return resultado;
  
}

int subtracao (int e, int f){

  int conta;
  conta = e - f;
  return conta;
  
}

int multiplicacao (int g, int h ){

  int calculo;
  calculo = g * h;
  return calculo;
  
  
}