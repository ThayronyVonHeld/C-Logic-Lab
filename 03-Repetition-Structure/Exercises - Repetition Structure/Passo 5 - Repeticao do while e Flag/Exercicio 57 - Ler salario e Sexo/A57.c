#include <stdio.h>

int main() {
    char genero;
    float salario;
    float fsalario = 0, msalario = 0; // totais
    int f = 0, m = 0;                 // contadores
    int continuar = 1;                // flag: 1 = continuar, 0 = parar

    while (continuar) {               // enquanto a flag for 1
        printf("Digite o genero do funcionario [F/M]: ");
        scanf(" %c", &genero);

        printf("Digite o salario: ");
        scanf("%f", &salario);

        if (genero == 'F' || genero == 'f') {
            fsalario += salario;
            f++;
        } else if (genero == 'M' || genero == 'm') {
            msalario += salario;
            m++;
        } else {
            printf("Genero invalido! Digite apenas F ou M.\n");
            continue; // repete o loop sem contar esse funcionário
        }

        char resposta;
        printf("Deseja cadastrar outro funcionario? [S/N]: ");
        scanf(" %c", &resposta);

        if (resposta == 'N' || resposta == 'n') {
            continuar = 0; // muda a flag para 0 → encerra o loop
        }
    }

    printf("\nTotal de salarios pagos a mulheres: %.2f\n", fsalario);
    printf("Total de salarios pagos a homens: %.2f\n", msalario);

    return 0;
}
