#include<stdio.h>

int main(){

    int contador, valor;

    contador = 0;

    printf("Ola, digite um numero inteiro e positivo, para contarmos: ");
        scanf("%d", &valor);

        while(contador <= valor){
            printf("%d\n", contador);
            contador++;
        }
        printf("Terminei de contar :)");
return 0;
}