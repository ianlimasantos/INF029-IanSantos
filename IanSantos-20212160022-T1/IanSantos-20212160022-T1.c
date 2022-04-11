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
#include "IanSantos-20212160022-T1.h" // Substitua pelo seu arquivo de header renomeado
#include <stdlib.h>


int q5 (int numero){
  
  int numero_invertido, resto, n1, n2, n3, n4, n5;

  n1 = numero/10000;
  resto = numero%10000;
  n2 = resto/1000;
  resto = resto%1000;
  n3 = resto/100;
  resto = resto%100;
  n4 = resto/10;
  n5 = resto%10;

  numero_invertido = (n5*10000 + n4*1000 + n3*100 + n2*10 + n1);

  return numero_invertido;
  
}