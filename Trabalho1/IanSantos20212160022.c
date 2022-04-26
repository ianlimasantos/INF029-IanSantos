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

int q1 (char data[]){
  
  int valor = 0;
  valor = quebraData(data);

  return valor;
}


int quebraData(char data[]){
  DataQuebrada dq;
  int valor_retorno;
  char sDia[3];
	char sMes[3];
	char sAno[5];
	int i; 
  int contador1, contador2, contador3;
  int condicao1, condicao2, condicao3, anobissexto;

	for (i = 0; data[i] != '/'; i++){
		sDia[i] = data[i];	
	}
	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sDia[i] = '\0';  // coloca o barra zero no final
    contador1 = 1;
	}else {
		contador1 = 0;
  }  
	

	int j = i + 1; //anda 1 cada para pular a barra
	i = 0;

	for (; data[j] != '/'; j++){
		sMes[i] = data[j];
		i++;
	}

	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sMes[i] = '\0';  // coloca o barra zero no final
    contador2 = 1;
	}else {
    contador2 = 0;
  }
	

	j = j + 1; //anda 1 cada para pular a barra
	i = 0;
	
	for(; data[j] != '\0'; j++){
	 	sAno[i] = data[j];
	 	i++;
	}

	if(i == 2 || i == 4){ // testa se tem 2 ou 4 digitos
		sAno[i] = '\0';  // coloca o barra zero no final
    contador3 = 1;
	}else {
		contador3 = 0;
  }

  dq.iDia = atoi(sDia);
  dq.iMes = atoi(sMes);
  dq.iAno = atoi(sAno); 

  if (dq.iAno<100 && dq.iAno != 0 && dq.iAno == 0)
       anobissexto = 1;
  else if (dq.iAno>=100 && dq.iAno<= 400 && condicao1 == 0 && condicao2 != 0)
  anobissexto = 1;
  else if(dq.iAno >= 400 && condicao1 == 0 && condicao2 != 0) // nesse if, o ano não é divisível por 100
  anobissexto = 1;
  else if(dq.iAno >= 400 && condicao1 == 0 && condicao2 == 0 && condicao3 == 0)
    anobissexto = 1;
  else 
    anobissexto = 0;


  
  if(anobissexto == 0){
  if (dq.iMes == 1 || dq.iMes == 3 || dq.iMes == 5 || dq.iMes == 7 || dq.iMes == 8  || dq.iMes == 10 || dq.iMes == 12){
    contador2 = 1;
    if (dq.iDia >= 1 && dq.iDia<=31 ){
      contador1 = 1;
    }
    else 
      contador1 = 0;
  }

  else if (dq.iMes == 2 || dq.iMes == 4 || dq.iMes == 6 || dq.iMes == 9 || dq.iMes == 11){
    contador2 = 1;
    if (dq.iDia >= 1 && dq.iDia<=30 ){
       contador1 = 1;
    }
    else 
      contador1 = 0;
    
  }

  else if (dq.iMes == 2 ){
    contador2 = 1;
    if (dq.iDia >= 1 && dq.iDia<=28 ){
      contador1 = 1;
    }
    else 
      contador1 = 0;
    
  }
    else{
    contador1 = 0;
    contador2 = 0;
    
    }
}
else {
if (dq.iMes == 1 || dq.iMes == 3 || dq.iMes == 5 || dq.iMes == 7 || dq.iMes == 8  || dq.iMes == 10 || dq.iMes == 12){
    contador2 = 1;
    if (dq.iDia >= 1 && dq.iDia<=31 ){
      contador1 = 1;
    }
    else
      contador1 = 0;
  }

  else if (dq.iMes == 2 || dq.iMes == 4 || dq.iMes == 6 || dq.iMes == 9 || dq.iMes == 11){
    contador2 = 1;
    if (dq.iDia >= 1 && dq.iDia<=30 ){
     contador1 = 1;
    }
    else
      contador1 = 0;
  }

  else if (dq.iMes == 2){
   if (dq.iDia >= 1 && dq.iDia<=29){
      contador1 = 1;
    }
    else
      contador1 = 0;
  }
  else{
    contador1 = 0;
    contador2 = 0;
    }
}

// Marcador para mim

    
	if (contador1 == 0 || contador2 == 0 || contador3 == 0){
    valor_retorno = 0;
  }
  else 
    valor_retorno = 1;
    
  return valor_retorno;
}


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
 



