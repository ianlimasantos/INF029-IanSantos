#include <stdio.h>

//gcc questao18.c -o questao18

long fatorial (int valor){
  long fat = 0;
  if (valor<=1){
    return 1;
  }else{
    fat = valor * fatorial(valor-1);
    return fat;
  }
}

long super_fatorial(int valor2){
  long aux = 0;
  if (valor2==0){
    return 1;
  }else{
    aux = fatorial(valor2) * super_fatorial(valor2-1);
    return aux;
  }
}

int main(){
     
  int numero = 0;
  printf("Digite o número do superfatorial: \n");
  scanf("%d", &numero);
  printf("O superfatorial vale %ld", super_fatorial(numero));
}
