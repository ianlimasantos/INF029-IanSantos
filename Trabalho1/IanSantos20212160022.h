#ifndef TRABALHO1_IANSANTOS20212160022_H
#define TRABALHO1_IANSANTOS20212160022_H

//#ifndef IanSantos20212160022_H
//#define IanSantos20212160022_H


typedef struct DQ
{
    int iDia; 
    int iMes;
    int iAno;
    int valido; // 0 se inválido, e 1 se válido 

} DataQuebrada;

typedef struct Qtd
{
    int qtdDias;
    int qtdMeses;
    int qtdAnos;
    int retorno;

} DiasMesesAnos;


int quebraData(char data[]);
int q1 (char data[]);
int q3 (char texto[], char letra, int casesensitive);
int q4(char texto[], char palavra[]);
int q5 (int numero);
int q6 (int numerobase, int numerobusca);


#endif