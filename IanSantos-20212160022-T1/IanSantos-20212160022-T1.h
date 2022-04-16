/* q3 - Faça um programa que o usuário informa um texto de até 250, e uma letra. O programa deve
informar quantas vezes essa letra aparece no texto. Desconsidere acentos nas vogais. Ou seja, um
'á' é igual a 'a'.*/

int q3 (char texto[], char letra){
  int contador1, contador2;
  for (contador1 = 0, contador2 = 0; contador2<=251; contador2++){
    if (texto[contador2] == letra)
      contador1++;
    if (letra == 'a'){
      if (texto[contador2] == 'à' || texto[contador2] == 'â' || 
          texto[contador2] == 'á' || texto[contador2] == 'ã')
          contador1++;
    }

    if (letra == 'e'){
      if (texto[contador2] == 'è' || texto[contador2] == 'ê' || 
          texto[contador2] == 'é')
          contador1++;
    }
    if (letra == 'i'){
      if (texto[contador2] == 'ì' || texto[contador2] == 'î' || 
          texto[contador2] == 'í' )
          contador1++;
    }
    if (letra == 'o'){
      if (texto[contador2] == 'ò' || texto[contador2] == 'ô' || 
          texto[contador2] == 'ó' || texto[contador2] == 'õ')
          contador1++;
    }
    if (letra == 'u'){
      if (texto[contador2] == 'ù' || texto[contador2] == 'û' || 
          texto[contador2] == 'ú')
          contador1++;
    }
    
      
  }

  return contador1;
}

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

