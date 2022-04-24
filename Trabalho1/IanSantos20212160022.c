// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome: Ian Bernardo Lima dos Santos
//  email: ianbernardolim@gmail.com
//  Matrícula: 20212160022
//  Semestre: 2022.1

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 07/05/2021 - 19/08/2016

// #################################################


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "IanSantos20212160022.h"

int q3 (char texto[], char letra, int casesensitive){


  int i, contador1, contador2;
  i = 0; 
  
  while(texto[i] != '\0'){
    i++;
  }

  if (casesensitive == 0){
    for (contador1 = 0, contador2 = 0; contador1<i; contador1++){
      if (texto[contador1] == letra)
        contador2++; 
    }
  }  

  else {
    letra = toupper(letra);
    for (contador1 = 0; contador1<i; contador1++){
    texto[i] = toupper(texto[i]);
  }
    for (contador1 = 0, contador2 = 0; contador1<i; contador1++){
      if (texto[contador1] == letra)
        contador2++;
    }
    
  }

  return contador2;
  
}

/*

int q4(char texto[], char palavra[]){
  
  int i, j, k;

 size_t ln = strlen(palavra)-1;
  
  for(i = 0, k = 0; i < 250; i++){
   if(texto[i] == palavra[i]){
      for (j = 1; texto[i] == palavra[j] && j < ln; j++){
        if (j == ln){
            k++;
          }
      }      
    }
  }
   printf (" K vale %d\n\n", k);
  return k;
 
}


*/

int q5 (int numero){
  
  int i, n1, n2, numero_invertido;
  
  for (i = 0, numero_invertido = 0; numero>=10; i++){
    n1 = numero/10;
    n2 = numero%10;
    numero = n1;
    numero_invertido = numero_invertido*10 + n2;
    if (n1<10){
        numero_invertido = numero_invertido*10 + n1;
      }
    
  }

return numero_invertido;

}




