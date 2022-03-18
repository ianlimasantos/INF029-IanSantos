#include <stdio.h>

int main (){

  float a, b;

  printf ("Insira o primeiro valor: \n");
  scanf ("%f", &a);
  printf ("Insira o segundo valor: \n");
  scanf ("%f", &b);

  a = a + b; 
  b = a - b;
  a = a - b;

  printf ("Agora, o primeiro valor é %d e o segundo valor é %",a,b);
  

}