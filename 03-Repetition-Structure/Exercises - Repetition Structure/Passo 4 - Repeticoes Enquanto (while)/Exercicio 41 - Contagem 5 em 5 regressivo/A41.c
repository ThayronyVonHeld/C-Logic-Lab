#include<stdio.h>

int main(){

    int contador;

    contador = 100;

    while(contador >= 0){
        printf("%d\n", contador);
        contador -=5;
    }
    return 0;
}