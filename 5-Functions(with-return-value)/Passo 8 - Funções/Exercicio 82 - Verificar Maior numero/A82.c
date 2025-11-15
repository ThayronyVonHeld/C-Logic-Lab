#include<stdio.h>
 int x, y, z;

int maior(int a, int b, int c){
    if ((a > b) && (a > c)) {
        printf("O numero %d e maior que o numero %d e %d", a, b, c);
    }
    else if ((b > a) && (b > c)){
        printf("O numero %d e maior que o numero %d e %d", b, a, c);
    }
   else if ((c > a) && (c > b)){
    printf("O numero %d e maior que o numero %d e %d", c, a, b);
}
    else if ((a == b) && (b == c)){
    printf("Os numeros %d, %d e %d sao iguais", a, b, c);
}
    return 0;
}


int main(){
   
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("Digite um numero inteiro: ");
    scanf("%d", &y);
    printf("Digite um numero inteiro: ");
    scanf("%d", &z);

    maior(x, y, z);
    return 0;
}