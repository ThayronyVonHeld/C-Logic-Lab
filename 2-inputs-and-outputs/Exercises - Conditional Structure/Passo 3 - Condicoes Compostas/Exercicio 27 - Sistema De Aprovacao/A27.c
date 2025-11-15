#include <stdio.h>

int main()
{
    float n1, n2, media;

    printf("Digite sua primeira nota: ");
    scanf("%f", &n1);

    printf("digite sua segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if (media < 5)
    {
        printf("Sua media foi de: %.2f, Voce foi Reprovado :(", media);
    }
    else if ((media >= 5.0) && (media < 7))
    {
        printf("Sua media foi de: %.2f, Voce esta de recuracao", media );
    }

    else
        printf("Parabens, sua media foi de: %.2f, e voce foi aprovado!", media);

    return 0;
}