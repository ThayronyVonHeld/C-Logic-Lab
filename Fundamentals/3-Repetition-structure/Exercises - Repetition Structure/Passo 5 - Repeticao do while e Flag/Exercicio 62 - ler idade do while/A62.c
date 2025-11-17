#include <stdio.h>

int main() {
    int idade, continuar;
    int qtd = 0, soma = 0, maiores21 = 0;

    do {
        printf("Digite uma idade: ");
        scanf("%d", &idade);

        qtd++;          // conta quantas idades foram digitadas
        soma += idade;  // soma para calcular a média

        if (idade >= 21) {
            maiores21++;
        }

        printf("Deseja continuar? [1-Sim / 0-Não]: ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    float media = (qtd > 0) ? (float)soma / qtd : 0;

    printf("\n--- RESULTADOS ---\n");
    printf("Total de idades digitadas: %d\n", qtd);
    printf("Média das idades: %.2f\n", media);
    printf("Pessoas com 21 anos ou mais: %d\n", maiores21);

    return 0;
}
