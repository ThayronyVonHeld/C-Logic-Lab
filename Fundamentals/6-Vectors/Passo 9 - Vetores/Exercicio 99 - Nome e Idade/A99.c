#include<stdio.h>

int main(){

    char nome[20][9];
    int idade[9];
    int i;

    for(i = 0; i < 9; i++){
        printf("Digite o nome: ");
        scanf("%s", nome[i]);

        printf("\nDigite a idade: ");
        scanf("%d", &idade[i]);
    }

    for(i = 0; i < 9; i++){
        if(idade[i] < 18){
            printf("%s: %d anos\n", nome[i], idade[i]);
        }
    }
}