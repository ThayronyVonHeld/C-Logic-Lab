#include <stdio.h>

int main()
{

    float n1, n2, media;
    char nome[50];

    printf("Me diga seu nome: ");
    scanf("%s", nome);

    printf("Agora digite sua primeira nota: ");
    scanf("%f", &n1);

    printf("E a sua segunda nota: ");
    scanf("%f", &n2);

    printf("%s Suas notas sao: \nNota1: %.2f \nNota2: %.2f\n", nome, n1, n2);

    media = (n1 + n2) / 2;

    {
        if (media >= 7)
            printf("Parabens %s, sua media e de: %.2f, Voce ficou acima da media!", nome, media);

        else
            printf("Ah que pena %s, voce ficou abaixo da media, sua media foi de: %.2f", nome, media);
    }
    return 0;
}