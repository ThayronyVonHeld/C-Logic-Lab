#include<stdio.h>

int N1, N2;
float resultado;

int media(int a, int b){
    return (a+b)/2;
}

int main(){
    printf("Digite a nota da AVA1: ");
        scanf("%d", &N1);
    printf("Digite a nota da AVA2: ");
        scanf("%d", &N2);

            resultado = media(N1, N2);
    
    printf("A media do Aluno e: %.2f", resultado);
    
    return 0;
}