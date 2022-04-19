#include <stdio.h>

int main(){
    char texto[] = "amor não é amor"; 
    char palavra[] = "amor";
    int aquela_porra_do_strlen = 4; 
    int i, j, k; 
    for(i = 0; i < 250; i++){
        if(texto[i] == palavra[i]){
            for (i = i, j = 0, k = 0; texto[i] == palavra[i]; i++, j++){
                if (j == aquela_porra_do_strlen){
                    k++;
                }
            }      
        }
    }
    printf("%d", k); 
}