#include <stdio.h>
#include <string.h>
#include "IanSantos-20212160022-T1.h"

// gcc IanSantos-20212160022-T1.c corretor.c -o T1
// gcc corretor.c -o T1

//void teste_q1();
//void teste_q3();
void teste_q4();
//void teste_q5();
//void teste_q6();

int main (){

  //teste_q3();
  teste_q4();
  //teste_q5();
  
}

/*void teste_q1(){

  char data[11];

  strcpy (data, "11/02/2002");
  printf ("%d\n", q1(data) == 1);

  
}*/


/*void teste_q3(){
  
char texto[251] = "Prato frito feito farofa fazendo fiado ficarei freguês";
char letra = 'e';
printf("A quantidade de vezes é %d\n", q3(texto, letra));  
}*/

void teste_q4(){
  printf ("%d\n", q4("Ari e Dante. Ari mudou, Ari ri e Ari ama", "Ari") == 4);
  
}
/*
void teste_q5(){
  printf("%d\n", q5(12345) == 54321);
  printf("%d\n", q5(15991) == 19951);
  printf("%d\n", q5(18963) == 16934);
}
*/
/*void teste_q6(){
  printf ("%d\n", q6(5444) == 1);
  printf ("%d\n", q6(54444) == 2);

  
}*/