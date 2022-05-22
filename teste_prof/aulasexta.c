#include <stdio.h>

// gcc aulasexta.c -o aulasexta -Wno-unused-result
void ler_dados (char *modelo, char *marca, int *ano);
void imprima ( char *modelo, char *marca, int *ano);

int main (){
  char modelo[20];
  char marca[20];
  int ano;
 // scanf ("%d", &ano);  
  ler_dados(modelo, marca, &ano);
  imprima (modelo, marca, &ano);
}


void ler_dados (char *modelo, char *marca, int *ano){

  
  printf ("Digite a marca:");
  fgets (marca, 20, stdin);
  printf ("Digite o modelo: ");
  fgets (modelo, 20, stdin);
  printf ("Digite o ano: ");
  scanf ("%d", ano);
  
}

void imprima ( char *modelo, char *marca, int *ano){
  printf ("----Dados----\n");
  printf ("Modelo - %s", modelo);
  printf ("Marca - %s", marca);
  printf ("Ano - %d", *ano);
  
}


