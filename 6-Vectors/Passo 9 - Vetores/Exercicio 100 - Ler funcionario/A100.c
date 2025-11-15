#include <stdio.h>

int main() {
    char nome[5][50];
    char sexo[5];
    float salario[5];
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("\nDigite o nome do funcionario %d: ", i + 1);
        scanf("%s", nome[i]);  

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo[i]); 

        printf("Digite o salario: R$ ");
        scanf("%f", &salario[i]);
    }

    printf("\n-------------------------------------------------\n");
    printf("Funcionarias mulheres com salario acima de R$5000:\n");
    printf("-------------------------------------------------\n");

    int encontrou = 0;
    for (i = 0; i < 5; i++) {
        if ((sexo[i] == 'F' || sexo[i] == 'f') && salario[i] > 5000) {
            printf("Nome: %s | Sexo: %c | Salario: R$ %.2f\n", nome[i], sexo[i], salario[i]);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhuma funcionaria com salario acima de R$5000 encontrada.\n");
    }

    return 0;
}
