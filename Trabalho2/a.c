#include <stdio.h>
#include <stdlib.h>

int main (){

  int *p;
  int i, quant_elementos;
  printf ("Digite a quantidade de elementos do vetor: ");
  scanf ("%d", &quant_elementos);
  p = (int*)(malloc (quant_elementos * sizeof(int)));

  if (p == NULL){
    printf ("\n Erro de alocação de memória");
    system ("pause");
    exit (1);
  }

  printf ("\n");

  for (i = 0; i < quant_elementos; i++){
    printf ("Digite o número para o índice [%d]: ", i);
    scanf ("%d", &p[i]);
  }
  printf("\n");

  for (i = 0; i < quant_elementos; i++){
    printf ("Valor armazenado no elemento de índice [%d] = %d\n", i, p[i]);
  }
  printf ("\n");

  free(p);
  system ("pause");
  return 0;
  
}