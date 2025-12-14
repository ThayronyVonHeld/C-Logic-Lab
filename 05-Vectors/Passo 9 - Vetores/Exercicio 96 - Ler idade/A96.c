#include <stdio.h>

int main() {
    int idades[8];
    int soma = 0, maior_idade = 0;

    for (int i = 0; i < 8; i++) {
        printf("Digite a idade da %d pessoa: ", i + 1);
        scanf("%d", &idades[i]);
        soma += idades[i];
        
        if (idades[i] > maior_idade) {
            maior_idade = idades[i];
        }
    }

    float media = soma / 8.0;
    printf("\nA media de idade e: %.2f\n", media);

    printf("Posiçoes com pessoas acima de 25 anos: ");
    int encontrou = 0;
    for (int i = 0; i < 8; i++) {
        if (idades[i] > 25) {
            printf("%d ", i); 
            encontrou = 1;
        }
    }
    if (!encontrou) printf("Nenhuma");
    printf("\n");

    printf("A maior idade digitada foi: %d\n", maior_idade);

    printf("Posicoes com a maior idade: ");
    encontrou = 0;
    for (int i = 0; i < 8; i++) {
        if (idades[i] == maior_idade) {
            printf("%d ", i);
            encontrou = 1;
        }
    }
    printf("\n");

    return 0;
}
