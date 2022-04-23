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
#include "IanSantos20212160022.h"


/* q3 - Faça um programa que o usuário informa um texto de até 250, e uma letra. O programa deve
informar quantas vezes essa letra aparece no texto. Desconsidere acentos nas vogais. Ou seja, um
'á' é igual a 'a'.*/

/*int q3 (char texto[], char letra){
  int contador1, contador2;
  for (contador1 = 0, contador2 = 0; contador2<=251; contador2++){
    if (texto[contador2] == letra)
      contador1++;
    
      
  }

  return contador1;
}
*/


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




/*Escreva uma função que determine quantas vezes um número K (de qualquer quantidade de
dígitos) ocorre em um número natural N. Por exemplo:
• O número 3 ocorre quatro vezes em 3539343.
• O número 44 ocorre uma vez em 5444, e duas vezes em 54444
• O número 23 ocorre duas vezes em 1234562354*/
/*
int q6 (int numero, int numero_buscado){

  int contador, t1, t2, copia_numero, copia2_numero;
  int i, n1, n2;
  int j, n3, n4;

  copia_numero = numero_buscado;
  copia2_numero = numero_buscado;
  
  for (contador = 0; copia_numero>=10; contador++){
    t1 = copia_numero/10;
    t2 = copia_numero%10;
    copia_numero = t1;
    if (t1<10){
        t2 = t1;
        n4 = t2;
        contador++;
      }
        
  }
  
  for (j = 0 ; numero>=10;  ){
    
    n1 = numero/10;
    n2 = numero%10;
    numero = n1;
    if (n1<10){
      n2 = n1;
    }
    
    if (n4 = n2){
      for (i = 1; n4 == n2 && i < contador; i++){
        n1 = numero/10;
        n2 = numero%10;
        numero = n1;
        if (n1<10){
          n2 = n1;
          }

        n3 = numero_buscado/10;
        n4 = numero_buscado%10;
        numero_buscado = n3;
        if (i = contador -1)
          j++;
      
      }
    }
    numero_buscado = copia2_numero;
  }
  
return j;
  
}
*/

//VERSÃO ATUAL



int q6(int numerobase, int numerobusca)
{
    int qtdOcorrencias = 0;
    int restonumerobase, restonumerobusca, contador, copia1, copia2;
   
    //copia1 = numerobusca;
    //copia2 = copia1;
   
    if (numerobase == 0 && numerobusca == 0)
        qtdOcorrencias ++;
       
    while (numerobase > 0){
      //      numerobusca = copia2;
  /*1 */     restonumerobase = numerobase % 10;
  /*2  */    restonumerobusca = numerobusca % 10;
                printf ("######\n");
                printf (" O resto numero base vale %d\n", restonumerobase);
                printf (" O resto numero busca vale %d\n", restonumerobusca);
                printf ("######\n");
                printf ("***********\n");
  /*3 */     if (restonumerobase == restonumerobusca){
/*  4 */  
  while (restonumerobase == restonumerobusca && numerobase>0 && numerobusca>0 && contador>0){
/*  5  */           numerobase = numerobase / 10;
 /* 6  */           numerobusca = numerobusca / 10;
 /* 7  */           restonumerobase = numerobase % 10;
 /* 8  */           restonumerobusca = numerobusca % 10;
                    printf (" O numero base vale %d\n", numerobase);
                    printf (" O numero busca vale %d\n", numerobusca);
                    printf (" O resto numero base vale %d\n", restonumerobase);
                    printf (" O resto numero busca vale %d\n", restonumerobusca);
                   
                   
                if (restonumerobusca<10){
                    restonumerobusca = numerobusca;
                    contador = -1;
                   
                }
 /* 9  */            if (contador<0){
 /* 10 */               qtdOcorrencias ++;
                        printf (" A quantidade de ocorrencias foi %d\n", qtdOcorrencias);
                        numerobase = numerobase / 10;
                       
                    }
               
            }
        }
       else{
        numerobase = numerobase / 10;
       }
    }

    return qtdOcorrencias;
   
   
   
   
}
