#include <stdio.h>

int main (){

  float a, b, auxiliar;

  printf ("Insira o primeiro valor: ");
  scanf ("%f", &a);
  printf ("Insira o segundo valor: ");
  scanf ("%f", &b);

  auxiliar = b;
  b = a;
  a = auxiliar;

  printf ("Agora, o primeiro valor é %f\n", a);
  printf ("E o segundo é %f", b);
    
}