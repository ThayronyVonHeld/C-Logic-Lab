#include <stdio.h>

int main()
{

    int ano, idade, alistado, faltante;

    printf("Digite o ano em que nasceu[AAAA]: ");
    scanf("%d", &ano);

    idade = 2025 - ano;
    alistado = idade - 18;
    faltante = alistado * -1;

    {
        if (idade > 18)
            printf("Voce possui %d anos, ja se passaram %d anos desde que se alistou", idade, alistado);

        else
            printf("Voce possui %d anos, ainda falta %d anos para voce se alistar", idade, faltante);
    }
}