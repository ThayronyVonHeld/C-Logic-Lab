#include<stdio.h>

int main()
{
    int idade, soma = 0, contador = 0, maior18 = 0, menor5 = 0, maior;  
    float media;

    while (contador < 10)
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade > 18){
        maior18++;
        }
        if (idade < 5){
            menor5++;
        }
         if (contador == 0) 
        {
            maior = idade;
        }
        else
        {
            if (idade > maior)
                maior = idade;
        }
        soma += idade;
        contador++;
    }

    media = (float)soma / contador;

    printf("Media das idades: %.2f\n", media);
    printf("Total de pessoas com mais de 18 anos: %d\n", maior18);
    printf("Total de pessoas com menos de 5 anos: %d\n", menor5);
    printf("Maior idade: %d\n", maior);


    return 0;
}