#include<stdio.h>

void maior(int a, int b){
    if (a > b){
        printf("O numero %d e maior que o numero %d", a, b);
    }
    else if (b > a){
        printf("O numero %d e maior que o numero %d", b, a);
    }
    else if (a = b){
        printf("Os numero %d e %d sao iguais", a, b);
    }
}

int main(){
    int x, y;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("Digite um numero inteiro: ");
    scanf("%d", &y);

    maior(x, y);

    return 0;
}