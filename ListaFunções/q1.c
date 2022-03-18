/* Crie um programa que tenha uma função soma e a função main. A função main deve ler dois
valores, enviar para a função soma. A função soma deve realizar a soma e retornar o valor. A
Função main deve imprimir o resultado da soma */

#include <stdio.h>

int main ()
{
  float funcaosoma (float a, float b);
  
  float valor1, valor2, resultado;

  printf ("Digite o primeiro valor: ");
  scanf ("%f", &valor1);
  getchar();
  printf ("Digite o segundo valor: ");
  scanf ("%f", &valor2);
  getchar();

  funcaosoma(valor1,valor2);
  resultado = funcaosoma(valor1, valor2);
  printf("O valor da soma é %f", resultado);
    
  return 0;
  
}
  
float funcaosoma (float a, float b)
{
  float conta;
  conta = a + b;
  return conta;
  
}