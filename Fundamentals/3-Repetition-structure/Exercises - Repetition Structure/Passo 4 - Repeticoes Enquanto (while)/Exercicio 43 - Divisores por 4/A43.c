#include<stdio.h>

int main(){

    int contagem, divisor;

    contagem = 30;
    divisor = 4;

    while(contagem > 0){
        if(contagem % divisor == 0){
           printf("%d\n", contagem);
    
        }
         contagem--;
    }
    
    return 0;

}