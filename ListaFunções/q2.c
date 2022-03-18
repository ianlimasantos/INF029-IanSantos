/*Crie um programa que tenha uma função subtrai e a função main. A função main deve ler três
valores, enviar para a função subtrai. A função subtrai deve realizar a subtração dos três valores
(primeiro menos o segundo menos o terceiro) e retornar o valor. A Função main deve imprimir o
resultado da subtração*/

#include <stdio.h>

int main ()
{
  float n1, n2, n3, resultado;

  float subtracao (float a, float b, float c);

  printf ("Digite o primeiro valor: ");
  scanf ("%f", &n1);
  getchar();
  printf ("Digite o segundo valor: ");
  scanf ("%f", &n2);
  getchar();
  printf ("Digite o terceiro valor: ");
  scanf ("%f", &n3);
  getchar();

  resultado = subtracao(n1,n2,n3);
  printf ("O valor da subtração é %f",resultado);

  return 0;
}

float subtracao (float a, float b, float c)
{
  float conta;
  conta = a - b - c;
  return conta;
  
}