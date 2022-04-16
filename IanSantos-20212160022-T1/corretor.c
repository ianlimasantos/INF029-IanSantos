#include <stdio.h>
#include <string.h>
#include "IanSantos-20212160022-T1.h"

// gcc IanSantos-20212160022-T1.c corretor.c -o T1

void teste_q3();
void teste_q5();

int main (){

  teste_q3();
 //teste_q5();
  
}

void teste_q3(){
  
char texto[251] = "Prato frito feito farofa fazendo fiado ficarei freguês";
char letra = 'e';
printf("A quantidade de vezes é %d\n", q3(texto, letra));  
}

void teste_q5(){
  printf("%d\n", q5(95327) == 72359);
  printf("%d\n", q5(15991) == 19951);
  printf("%d\n", q5(18963) == 16934);
}
