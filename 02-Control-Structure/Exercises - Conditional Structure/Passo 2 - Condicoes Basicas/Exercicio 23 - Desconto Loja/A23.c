#include<stdio.h>

int main (){

    char genero;
    char nome[50];
    float compras, valorFinal, desconto, F, M;

    printf("Digite seu Nome: ");
    scanf("%s", nome);

    printf("Digite seu genero [F] para feminino [M] para masculino: ");
    scanf(" %c", &genero);
    
    printf("Insira o valor da compra: ");
    scanf("%f", &compras);
   

      if (genero == 'F' || genero == 'f') {
        desconto = compras * 0.13;
        valorFinal = compras - desconto;
        printf("Parabens, %s! Voce ganhou 13%% de desconto. Total: R$%.2f\n", nome, valorFinal);
    } else if (genero == 'M' || genero == 'm') {
        desconto = compras * 0.05;
        valorFinal = compras - desconto;
        printf("Parabens, %s! Voce ganhou 5%% de desconto. Total: R$%.2f\n", nome, valorFinal);
    } else {
        printf("Genero invalido.\n");
    }
    return 0;
}