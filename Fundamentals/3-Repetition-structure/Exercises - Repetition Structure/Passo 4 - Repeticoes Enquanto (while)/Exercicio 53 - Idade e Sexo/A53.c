#include <stdio.h>

int main() {
    int idade, soma = 0, contador = 0;
    int feminino = 0, masculino = 0, mulheres20 = 0;
    int somaHomens = 0;
    float media, mediaHomens;

    while (contador < 5) {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        char sexo;
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        soma += idade; // soma total do grupo

        if (sexo == 'M' || sexo == 'm') {
            masculino++;
            somaHomens += idade;
        } 
        else if (sexo == 'F' || sexo == 'f') {
            feminino++;
            if (idade > 20) {
                mulheres20++;
            }
        } 
        else {
            printf("Sexo inválido! Digite apenas M ou F.\n");
            continue; // volta e não conta como pessoa
        }

        contador++;
    }

    media = (float)soma / contador;

    if (masculino > 0) {
        mediaHomens = (float)somaHomens / masculino;
    } else {
        mediaHomens = 0; // evita divisão por zero
    }

    printf("\nTotal de homens cadastrados: %d\n", masculino);
    printf("Total de mulheres cadastradas: %d\n", feminino);
    printf("Media de idade do grupo: %.2f\n", media);
    printf("Media de idade dos homens: %.2f\n", mediaHomens);
    printf("Mulheres com mais de 20 anos: %d\n", mulheres20);

    return 0;
}
