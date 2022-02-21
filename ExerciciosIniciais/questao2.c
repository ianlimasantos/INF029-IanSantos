#include <stdio.h>

int main (){

  int idade1, idade2, soma;

  printf ("Insira a primeira idade: \n ");
  scanf ("%d", &idade1);
  printf ("Insira  a segunda idade: ");
  scanf ("%d", &idade2);

  soma = idade1 + idade2;

  printf ("A soma das idades é %d", soma);
  
}