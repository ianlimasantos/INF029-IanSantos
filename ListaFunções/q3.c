/* 3) Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial
deste número. Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve
de alguma forma retornar para a main que deu algum erro. A função main deve solicitar o valor do
usuário e imprimir o fatorial dele, ou se não é possível calcular o fatorial. */

#include <stdio.h>

int main ()
{
  int numero, resultado;

  int fatorial (int x);
  
  printf ("Digite o número que você quer saber o fatorial: ");
  scanf ("%d", &numero);
  getchar();
  
  resultado = fatorial(numero);
  if (resultado>=1)
    printf ("O fatorial é %d", resultado);
  else 
    printf ("ERRO! Não é possível fazer o fatorial deste número!");
  
  return 0;
  
}

int fatorial (int x)
{
  int calculo;
  
  if (x > 0 || x == 0){
    if(x==0)
      calculo = 1;
    else 
      calculo = x * fatorial (x-1);
  }
  else
  calculo = -1;

  return calculo;

}