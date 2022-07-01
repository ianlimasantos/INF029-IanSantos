#include <stdio.h>
#include <stdlib.h>

//gcc questao11.c -o questao11

int aux = 0;

int Multip_Rec(int a, int b);

int main(){
  int n1, n2;
  
  printf("Digite um número: ");
  scanf("%d",&n1);
  printf("Digite outro número: ");
  scanf("%d",&n2);

  printf("A multiplicação vale %d", Multip_Rec(n1,n2));
}

int Multip_Rec(int a, int b){
  if(b == 0){
    a = aux;
    return a;
      

  }
  else{
    aux = aux + a;
    Multip_Rec(a,b-1);
  }
}