#include<stdio.h>

int somador(int a, int b){
    return a+b;
}

int main(){

    int x, y;
printf("Digite um numero: ");
    scanf("%d", &x);

    printf("Digite outro numero: ");
    scanf("%d", &y);

    int resultado = somador(x, y);

    printf("O resultado da soma entre %d e %d e igual a: %d", x, y, resultado);

}