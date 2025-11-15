#include <stdio.h>

int main() {
    float salario, aumento;
    int anos, genero;

    printf("Digite seu salario atual: ");
    scanf("%f", &salario);

    printf("Qual seu genero? \n");
    printf("Digite [1] para [Feminino] ou [2] para [Masculino]: ");
    scanf("%d", &genero);

    printf("Digite ha quantos anos trabalha na empresa: ");
    scanf("%d", &anos);

    if (genero != 1 && genero != 2) {
        printf("Erro: Gênero inválido. Digite 1 para Feminino ou 2 para Masculino.\n");
        return 1;
    }

    if (genero == 1) {
        if (anos < 10) {
            aumento = (salario * 0.05) + salario;
            printf("Parabens, seu novo salario e de R$ %.2f\n", aumento);
        }
        else if (anos < 15) {
            aumento = (salario * 0.12) + salario;
            printf("Parabens, seu novo salario e de R$ %.2f\n", aumento);
        }   
        else {
            aumento = (salario * 0.23) + salario;
            printf("Parabens, seu novo salario e de R$ %.2f\n", aumento);
        }
    }
    else if (genero == 2) {
        if (anos < 15) {
            aumento = (salario * 0.03) + salario;
            printf("Parabens, seu novo salario e de R$ %.2f\n", aumento);
        }
        else if (anos < 25) {
            aumento = (salario * 0.13) + salario;
            printf("Parabens, seu novo salario e de R$ %.2f\n", aumento);
        }
        else {
            aumento = (salario * 0.25) + salario;
            printf("Parabens, seu novo salario e de R$ %.2f\n", aumento);
        }
    }

    return 0;
}

