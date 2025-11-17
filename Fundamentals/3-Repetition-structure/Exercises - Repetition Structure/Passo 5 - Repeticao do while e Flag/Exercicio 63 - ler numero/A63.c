#include <stdio.h>

int main() {
    int num, continuar;
    int soma = 0, qtd = 0, pares = 0;
    int menor; 
    int primeiro = 1; // flag para inicializar o menor valor

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);

        soma += num;   // acumula para somatório
        qtd++;         // conta quantos números foram digitados

        if (primeiro) {         // primeira vez define o menor
            menor = num;
            primeiro = 0;
        } else if (num < menor) {
            menor = num;
        }

        if (num % 2 == 0) {     // conta pares
            pares++;
        }

        printf("Deseja continuar? [1-Sim / 0-Nao]: ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    float media = (qtd > 0) ? (float)soma / qtd : 0;

    printf("\n--- RESULTADOS ---\n");
    printf("Somatório dos valores: %d\n", soma);
    printf("Menor valor digitado: %d\n", menor);
    printf("Média entre os valores: %.2f\n", media);
    printf("Quantidade de valores pares: %d\n", pares);

    return 0;
}
