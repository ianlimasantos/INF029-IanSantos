#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 250

// gcc q3.c -o q3
/*Faça um programa que o usuário informa um texto de até 250, e uma letra. O programa deve
informar quantas vezes essa letra aparece no texto. Desconsidere acentos nas vogais. Ou seja, um
'á' é igual a 'a'.*/

char q3 (char texto[TAM], char letra);

int main(){

  char texto[TAM] = "É preciso amar, as pessoas como se não houvesse amanhã";
  char letra = 'a';
  q3(texto, letra);
}


char q3(char texto[], char letra){
  int i, j, contador1, contador2;
  j = 0; 
  while(texto[j] != '\0'){
    j++;
  }
  for (i = 0; i < j; i++){
    texto[i] = toupper(texto[i]);
  }
  letra = toupper(letra); 
  printf ("%s", texto);




 contador2 = 0;
  
  for (contador1 = 0; contador1<250; contador1++){
    if (texto[contador1] == letra)
      contador2++;
  }
  printf("\n%d", contador2); 
}



/*int main()
{
    char letra = 'a';
    letra = toupper(letra);
    printf("%c", letra); 
    return 0;
}*/

/*void testQ3()
{
    char str[250];
    strcpy(str, "Renato Lima Novais");
    printf("%d\n", q3(str, 'a', 0) == 3);
    printf("%d\n", q3(str, 'b', 0) == 0);
    printf("%d\n", q3(str, 'l', 1) == 0);
    printf("%d\n", q3(str, 'l', 0) == 1);
    printf("%d\n", q3(str, 'L', 0) == 1);
}*/