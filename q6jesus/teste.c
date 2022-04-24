#include <stdio.h>
#include <string.h>
#include <ctype.h>
// gcc teste.c -o teste
void q3(char texto[], char letra); 
int main(){

  char texto[] = "Felicidade";
  char letra = 'a';
  q3(texto, letra);
}

void q3(char texto[], char letra){
  int i, j;
  while(texto[j] != '\0'){
    j++;
  }
    
  /*for (i = 0; i < j; i++){
    texto[i] = toupper(texto[i]);
  }*/
  printf("%d", j); 
  printf ("%s", texto);
}