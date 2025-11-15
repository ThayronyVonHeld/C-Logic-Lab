#include <stdio.h>

int main() {
    int idade = 0, continuar; 
    int feminino = 0, masculino = 0; 
    int somaIdadeM = 0;
    int maiorIdade = 0;
    int menorIdadeF = 999; // começa alto para facilitar comparação
    char genero; 

    do {
        printf("Digite uma Idade: ");
        scanf("%d", &idade);

        printf("Digite o genero [F] ou [M]: ");
        scanf(" %c", &genero); // espaço antes do %c

        // Atualiza maior idade
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        if ((genero == 'F') || (genero == 'f')) {
            feminino++;
            if (idade < menorIdadeF) {
                menorIdadeF = idade;
            }
        } 
        else if ((genero == 'M') || (genero == 'm')) {
            masculino++;
            somaIdadeM += idade; 
        }

        printf("---------------------------------\n");
        printf("Digite [1] para continuar\n");
        printf("Digite [0] para sair\n");
        printf("Deseja continuar? ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    float mediaM = (masculino > 0) ? (float)somaIdadeM / masculino : 0;

    printf("\n--- RESULTADOS ---\n");
    printf("A maior idade lida foi: %d\n", maiorIdade);
    printf("A quantidade de homens cadastrados foi: %d\n", masculino);
    if (feminino > 0)
        printf("A idade da mulher mais jovem foi de: %d\n", menorIdadeF);
    else
        printf("Nenhuma mulher cadastrada.\n");
    printf("A media de idade entre os homens foi: %.2f\n", mediaM);

    return 0;
}
