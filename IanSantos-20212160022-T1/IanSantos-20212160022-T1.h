/* q3 - Faça um programa que o usuário informa um texto de até 250, e uma letra. O programa deve
informar quantas vezes essa letra aparece no texto. Desconsidere acentos nas vogais. Ou seja, um
'á' é igual a 'a'.*/

int q3 (char texto, char letra)

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

