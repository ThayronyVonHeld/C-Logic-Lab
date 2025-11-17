#include <stdio.h>

int main() {
    int contador;
    int feminino = 0, masculino = 0;
    int homens_mais100 = 0;
    float peso, soma_peso_f = 0, media_peso_f = 0;
    float maior_peso_m = 0;
    char genero;

    for (contador = 1; contador <= 8; contador++) {
        printf("Digite o genero [F] ou [M]: ");
        scanf(" %c", &genero);

        printf("Digite seu peso: ");
        scanf("%f", &peso);

        if (genero == 'F' || genero == 'f') {
            feminino++;
            soma_peso_f += peso;
        } 
        else if (genero == 'M' || genero == 'm') {
            masculino++;
            if (peso > 100) {
                homens_mais100++;
            }
            if (peso > maior_peso_m) {
                maior_peso_m = peso;
            }
        }
    }

    if (feminino > 0) {
        media_peso_f = soma_peso_f / feminino;
    }

    printf("\n--- RESULTADOS ---\n");
    printf("A quantidade de mulheres cadastradas foi: %d\n", feminino);
    printf("A quantidade de homens que pesam mais de 100Kg foi: %d\n", homens_mais100);
    printf("A media de peso das mulheres e: %.2f\n", media_peso_f);
    printf("O maior peso entre os homens foi de: %.2f\n", maior_peso_m);

    return 0;
}
