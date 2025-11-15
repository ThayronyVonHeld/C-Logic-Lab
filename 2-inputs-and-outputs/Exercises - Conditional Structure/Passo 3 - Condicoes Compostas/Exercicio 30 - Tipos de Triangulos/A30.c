#include <stdio.h>

int main()
{
    int l1, l2, l3;

    printf("Digite o valor da primeira reta: ");
    scanf("%d", &l1);

    printf("Digite o valor da segunda reta: ");
    scanf("%d", &l2);

    printf("Digite o valor da terceira reta: ");
    scanf("%d", &l3);

    // Verificação se os lados formam um triângulo
    if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1)) {
        if (l1 == l2 && l2 == l3) {
            printf("---------------------------------------------------------\n");
            printf("Voce formou um TRIANGULO EQUILATERO\n");
            printf("Um triangulo EQUILATERO possui TODOS os lados IGUAIS\n");
            printf("---------------------------------------------------------\n");
        } else if (l1 == l2 || l1 == l3 || l2 == l3) {
            printf("---------------------------------------------------------\n");
            printf("Voce formou um TRIANGULO ISOSCELES\n");
            printf("Um triangulo ISOSCELES possui DOIS lados IGUAIS\n");
            printf("---------------------------------------------------------\n");
        } else {
            printf("---------------------------------------------------------\n");
            printf("Voce formou um TRIANGULO ESCALENO\n");
            printf("Um triangulo ESCALENO possui TODOS os lados DIFERENTES\n");
            printf("---------------------------------------------------------\n");
        }
    } else {
        printf("---------------------------------------------------------\n");
        printf("Os valores digitados NAO FORMAM um triangulo\n");
        printf("A soma de dois lados deve ser sempre MAIOR que o terceiro lado\n");
        printf("---------------------------------------------------------\n");
    }

    return 0;
}