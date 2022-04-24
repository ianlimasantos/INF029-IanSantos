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
  
  //for(k = 0; k < i; k++){
   // printf("%c ", texto[k]); 
  //}
 // printf ("- ");
  
  if (casesensitive == 1){
    for (contador1 = 0, contador2 = 0; contador1<=i; contador1++){
      if (texto[contador1] == letra){
        contador2++; 
      }
    }
  }  

  else {
    letra = toupper(letra);
    for (contador1 = 0; contador1<=i; contador1++){
    texto[contador1] = toupper(texto[contador1]);
  }

    for (contador1 = 0, contador2 = 0; contador1<=i; contador1++){
      if (texto[contador1] == letra){
        contador2++;
      }
    }
    
  }

  return contador2;
  
}


/* Faça um programa em que o usuário informa um texto de até 250 e uma palavra. Programa deve informar a posição inicial e final de todas as ocorrências da palavra no texto.
*/

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

int q6 (int numerobase, int numerobusca){
  int qtdOcorrencias = 0;
  int restonumerobase, restonumerobusca, contador, copia1;
  int i = 0;

  if (numerobusca<10){
   while (numerobase > 0){
        
        restonumerobase = numerobase % 10;
        if (restonumerobase == numerobusca) 
        {
          qtdOcorrencias ++;
        }

        numerobase = numerobase / 10;
    }

}







 else { 
  copia1 = numerobusca;
   
  if (numerobase == 0 && numerobusca == 0)
    qtdOcorrencias ++;
       
  while (numerobase > 0){
    restonumerobase = numerobase % 10;
    restonumerobusca = numerobusca % 10;        
      if (restonumerobase == restonumerobusca){
          contador = 1;
          while (restonumerobase == restonumerobusca && numerobase>0 && contador>0){
            numerobase = numerobase / 10; 
            numerobusca = numerobusca / 10; 
            restonumerobase = numerobase % 10; 
            restonumerobusca = numerobusca % 10;  
              if (numerobusca<10 && numerobusca == restonumerobase ){
                  restonumerobusca = numerobusca;
                  contador = -1;
              }
              if (contador<0){
                qtdOcorrencias ++;
                numerobase = numerobase / 10;//20222
                numerobusca = copia1;     
              }
               
            }
          }
        else{
            numerobase = numerobase / 10; //202222 
            numerobusca = copia1;   //22
        }
    }
   }
    return qtdOcorrencias;
}
 



