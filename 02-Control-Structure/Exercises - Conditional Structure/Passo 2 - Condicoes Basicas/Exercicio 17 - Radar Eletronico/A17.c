#include<stdio.h>

int main(){

    int velocidade, multa;

printf("Qual foi a velocidade do carro[Km/h]? ");
    scanf("%d", &velocidade);

    multa = velocidade * 5;
{
if (velocidade > 80)
    printf("Voce foi multado e precisa pagar R$%d", multa);

    else
        printf("Parabens, voce ficou abaixo da velocidade maxima permitida");
}   
}