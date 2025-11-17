#include <stdio.h>

int main()
{
    int contador = 0;
    float preco, maior, menor;

    while (contador < 8)
    {
        printf("Digite o preco do produto: ");
        scanf("%f", &preco);

        if (contador == 0) 
        {
            maior = preco;
            menor = preco;
        }
        else
        {
            if (preco > maior)
                maior = preco;

            if (preco < menor)
                menor = preco;
        }

        contador++;
    }

    printf("Maior preco digitado: %.2f\n", maior);
    printf("Menor preco digitado: %.2f\n", menor);

    return 0;
}
