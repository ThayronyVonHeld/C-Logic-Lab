#include<stdio.h>

int main(){

    int idade;

    printf("Qual a sua idade? ");
        scanf("%d", &idade);

        {
        if (idade < 16) 
            printf("Voce ainda nao possui idade para votar");

        else
        printf("Voce ja pode exercer seu direito democratico ao voto");
        }
}