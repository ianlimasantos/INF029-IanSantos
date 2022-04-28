#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "IanSantos20212160022.h"

// gcc IanSantos20212160022.c corretor.c -o T1

void teste_q1();
void teste_q3();
void teste_q5();
void teste_q6();

int main (){

  teste_q1();
//teste_q3();
//  teste_q5();
 // teste_q6();
  
}

void teste_q1()
{
  
    char str[11];
    strcpy(str, "29/02/2015");
    printf("%d\n", q1(str) == 0);
    strcpy(str, "29/02/2012");
    printf("%d\n", q1(str) == 1);
    strcpy(str, "9/13/2014");
    printf("%d\n", q1(str) == 0);
    strcpy(str, "45/4/2014");
    printf("%d\n", q1(str) == 0);
    strcpy(str, "/9/2014");
    printf("%d\n", q1(str) == 0);




void teste_q3()
{

  char str[250];
    strcpy(str,"Renato Lima Novais");
    printf("%d\n",q3(str, 'a', 0) == 3);
    printf("%d\n",q3(str, 'b', 0) == 0);
    printf("%d\n",q3(str, 'l', 1) == 0);
    printf("%d\n",q3(str, 'l', 0) == 1);
    printf("%d\n",q3(str, 'L', 0) == 1);

}



void teste_q5(){

    printf("%d\n",q5(345) == 543);
    printf("%d\n",q5(78) == 87);
    printf("%d\n",q5(3) == 3);
    printf("%d\n",q5(5430) == 345);
    printf("%d\n",q5(1000) == 1);
    printf("%d\n",q5(0) == 0);
    printf("%d\n",q5(707) == 707);
    printf("%d\n",q5(80) == 8);
    printf("%d\n",q5(8) == 8);
    printf("%d\n",q5(1234) == 4321);
}


void teste_q6(){
  
    printf("%d\n",q6(34567368, 3) == 2);
    printf("%d\n",q6(34567368, 4576) == 0);
    printf("%d\n",q6(3539343, 3) == 4);
    printf("%d\n",q6(3539343, 39) == 1);
    printf("%d\n",q6(5444, 44) == 1);
    printf("%d\n",q6(54444, 44) == 2);
    printf("%d\n",q6(1234562354, 23) == 2);
    printf("%d\n",q6(1234, 13) == 0);
    printf("%d\n",q6(544444, 4) == 5);
    printf("%d\n",q6(1234562354, 32) == 0);
}
