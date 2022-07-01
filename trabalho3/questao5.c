#include <stdio.h>
#include <stdlib.h>

// gcc questao4.c -o q4
int somatorio(int n);

int main()
{
    int numero;
    printf("Informe o numero: ");
    scanf("%d", &numero);
    printf("Resultado: %d", somatorio(numero));
}

int somatorio(int digito)
{
    if (digito == 1)
        return digito;
    else
        return digito + somatorio(digito - 1);
}