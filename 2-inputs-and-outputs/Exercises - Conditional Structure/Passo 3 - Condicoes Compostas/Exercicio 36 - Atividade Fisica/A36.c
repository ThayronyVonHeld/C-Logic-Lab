#include <stdio.h>

int main (){
    int horas = 0, pontos;
    float valor_a_receber;

    printf("---------------------------------------\n");
    printf("Bem Vindo ao Programa Vida Saudavel\n");
    printf("Quantas horas de Exercicio Fisico voce fez no mes? ");
    scanf("%d", &horas);
    printf("---------------------------------------\n");

    if (horas < 0){
        printf("ERRO: O numero de horas nao pode ser negativo.\n");
        return 1;
    }

    if (horas < 10){
        pontos = horas * 2;
        printf("Parabens, voce fez %d pontos e pode melhorar!\n", pontos);
    }
    else if (horas < 20){
        pontos = horas * 5;
        printf("Parabens, voce fez %d pontos e pode melhorar!\n", pontos);
    }
    else {
        pontos = horas * 10;
        printf("Parabens, voce fez %d pontos!\n", pontos);
    }

    valor_a_receber = pontos * 0.05;
    printf("Como incentivo, voce recebeu R$%.2f\n", valor_a_receber);

    return 0;
}

