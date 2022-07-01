#include <stdio.h>

int inverterNumero (int digito, int cont);
//gcc questao3.c -o questao3
int main (){
  int numero, numero_invertido;
  
  printf ("Digite o número:");
  scanf ("%d", &numero);

  numero_invertido = inverterNumero(numero, 1);
  printf ("O número invertido é: %d",   numero_invertido);
  
}

int inverterNumero (int digito, int *cont){
  int resto;
  if (digito/10 == 0)
    return digito % 10;
  else{
    *cont = *cont * 10;
    resto = digito % 10;
    digito = digito / 10;
    return inverterNumero (digito, &cont) + resto * (*cont);
  }
}  

/*
int inverter (int digito){

  int divisao, aux, invertido, resto;
  int div_inteira, n = 0;

  if (digito/10 == 0){
    printf ("o valor do digito é %d\n", aux);
    aux = digito%10;
    printf ("o valor é %d\n", aux);
    return aux;
  }
    
  else{
    while(digito!=0){
      resto = digito
      digito = digito/10;
      printf ("o valor da divisão é %d\n", divisao);
      div_inteira = digito%10;
      printf ("o valor da divisão inteira é %d\n", div_inteira);
      n++;
    }
    return div_inteira*n + inverter(digito);
  }    
}  
  /*
  if ()  
    div_inteira += digito%10;
    
    contador++;

  
    123/10 = 12;
    123%10 = 3
    12/10 = 1
    12%10 = 2
    1/10 = 0
    1%10 = 1

////////ERRADO
 divisao = digito/10; 
  printf ("o valor da divisão é %d\n", divisao);
  div_inteira = digito%10;
  printf ("o valor da div_inteira é %d\n", div_inteira);
  digito = divisao;
  return div_inteira + inverter(digito);
*/
