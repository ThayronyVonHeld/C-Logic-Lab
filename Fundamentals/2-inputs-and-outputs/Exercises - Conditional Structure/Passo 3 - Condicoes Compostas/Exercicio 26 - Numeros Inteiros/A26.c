#include <stdio.h>

int main()
{

    int n1, n2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    printf("digite um segundo numero inteiro: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("O primeiro valor e maior que o segundo");
    }
    else if (n2 > n1)
    {
        printf("O segundo valor e maior que o primeiro");
    }
    else
        printf("os valores sao iguais");


        return 0;
}