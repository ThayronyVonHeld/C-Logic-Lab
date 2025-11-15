#include <stdio.h>

int main()
{

    int contagem, valor_inicial, valor_final, intervalo;

    printf("Digite o valor inicial: ");
    scanf("%d", &valor_inicial);

    printf("Digite agora o valor final: ");
    scanf("%d", &valor_final);

    printf("Digite de quanto em quanto deseja contar: ");
    scanf("%d", &intervalo);

    contagem = valor_inicial;

    while (contagem < valor_final)
    {
        printf("%d\n", contagem);
        contagem += intervalo;
    }

    return 0;
}