#include <stdio.h>

// gcc q6.c -o q6
int q6(int numerobase, int numerobusca);

int main (){ 
  //q6(1434, 4);
  q6(12111011, 11);
}


int q6(int numerobase, int numerobusca){
    int qtdOcorrencias = 0;
    int restonumerobase, restonumerobusca, contador, copia1, copia2;
    int i = 0;
    copia1 = numerobusca;
    //copia2 = copia1;
   
    if (numerobase == 0 && numerobusca == 0)
      qtdOcorrencias ++;
       
    while (numerobase > 0){
      //      numerobusca = copia2;
        restonumerobase = numerobase % 10;
        restonumerobusca = numerobusca % 10;
                
        if (restonumerobase == restonumerobusca){
          contador = 1;
          while (restonumerobase == restonumerobusca && numerobase>0 && contador>0){
              numerobase = numerobase / 10; //202222 //2022
              numerobusca = numerobusca / 10; //2; //
              restonumerobase = numerobase % 10; //2
              restonumerobusca = numerobusca % 10; //2 
                  printf (" O numero base vale %d\n", numerobase);
                  printf (" O numero busca vale %d\n", numerobusca);
                  printf (" O resto numero base vale %d\n", restonumerobase);
                  printf (" O resto numero busca vale %d\n", restonumerobusca);
                   
                   
                if (numerobusca<10 && numerobusca == restonumerobase ){
                  restonumerobusca = numerobusca;
                  printf (" - O resto numero busca vale %d\n", restonumerobusca);
                    contador = -1;
                   
                }
              if (contador<0){
                qtdOcorrencias ++;
                printf (" A quantidade de ocorrencias foi %d\n", qtdOcorrencias);
                numerobase = numerobase / 10;//20222
                numerobusca = copia1;
                        
                printf ("AAAAAAAAAAAAAAAAA\n");
                printf (" O numero base vale %d\n", numerobase);
                printf ("AAAAAAAAAAAAAAAAA\n");
              }
               
            }
          }
        else{
            numerobase = numerobase / 10; //202222 
            numerobusca = copia1;   //22

            printf ("ELSE PRINTADO BBS\n");
            printf (" O numero base vale %d\n", numerobase);
            printf (" O numero busca vale %d\n", numerobusca);
            printf ("ELSE PRINTADO BBS\n");
        }
    }
printf (" A quantidade de ocorrencias foi %d\n", qtdOcorrencias);
    return qtdOcorrencias;
}
 