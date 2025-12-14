#include <stdio.h>

int main()
{

    int n1;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    if (n1 % 2)
        printf("O numero %d e Impar", n1);

    else
        printf("O numero %d e Par", n1);
}