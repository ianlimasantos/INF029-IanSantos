#include <stdio.h>
#include <math.h>

//gcc questao3.c -o q3 -lm

int inverterNumero(int numero);
int calcula_qtd_digitos(int numero);

int main (){
  int numero = 0, numero_invertido;
  while(numero >= 0){
    printf ("Digite o número:");
    scanf ("%d", &numero);
  
    int loops = 0;
    
    numero_invertido = inverterNumero(numero);
    printf ("O número invertido é: %d\n", numero_invertido);
  }
  
}

int qtd_digitos = 0;

int inverterNumero (int numero){
  if (qtd_digitos == 0)
    qtd_digitos = calcula_qtd_digitos(numero);  
  
  int resto;
  if (numero/10 == 0){
    qtd_digitos = 0;
    return numero % 10;
  }else{
    resto = numero % 10;
    numero = numero / 10;
    return resto * pow(10, --qtd_digitos) + inverterNumero (numero);
  }
} 

int calcula_qtd_digitos(int numero){
  int contador = 1;
  while (numero/10 > 0){
    numero = numero / 10;
    contador++;
  }
  return contador;
}