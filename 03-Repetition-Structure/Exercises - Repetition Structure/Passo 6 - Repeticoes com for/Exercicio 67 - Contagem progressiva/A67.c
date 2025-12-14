#include<stdio.h>

int main(){

    int contador, numero = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

        for(contador = 0; contador <= numero; contador++){
    printf("%d\n", contador);
        }
        return 0;
}