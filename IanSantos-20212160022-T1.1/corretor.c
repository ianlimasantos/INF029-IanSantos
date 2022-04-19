#include <stdio.h>
#include <string.h>
#include "PrimeiroUltimoNomeMATRICULA.h"
int main()
{
    //testSomar();
    //testFatorial();
    testQ1();
    //testQ2();
    /*testQ3();
    testQ4();
    testQ5();
    testQ6();*/
}

void testQ1()
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
}