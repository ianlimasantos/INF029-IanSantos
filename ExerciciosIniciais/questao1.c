#include <stdio.h>

int main (){

char nome[60];
int matricula, semestre;

printf ("Digite seu nome: ");
scanf ("%s", nome);
printf ("Digite sua matrícula: ");
scanf ("%d", &matricula);
printf ("Digite seu semestre de ingresso: ");
scanf ("%d", &semestre);

printf ("Seu nome é %s.\nSua matrícula é %d.\n", nome, matricula);
printf ("Seu semestre de ingresso é %d", semestre);
  
}
