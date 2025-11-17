#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], nomeMaisVelho[50], nomeMulherJovem[50];
    int idade, continuar;
    char sexo;
    
    int totalPessoas = 0, somaIdades = 0;
    int maisVelho = 0, mulherMaisJovem = 999;
    int homens30 = 0, mulheres18 = 0;

    do {
        printf("Digite o nome: ");
        scanf(" %[^\n]", nome);  // lê string com espaços

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o sexo [M/F]: ");
        scanf(" %c", &sexo);

        // Contagem geral
        totalPessoas++;
        somaIdades += idade;

        // Pessoa mais velha
        if (idade > maisVelho) {
            maisVelho = idade;
            strcpy(nomeMaisVelho, nome);
        }

        // Mulher mais jovem
        if (sexo == 'F' || sexo == 'f') {
            if (idade < mulherMaisJovem) {
                mulherMaisJovem = idade;
                strcpy(nomeMulherJovem, nome);
            }
            if (idade < 18) mulheres18++;
        } 

        // Homens com mais de 30
        if (sexo == 'M' || sexo == 'm') {
            if (idade > 30) homens30++;
        }

        printf("\nDeseja continuar? [1-Sim / 0-Não]: ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    float media = (totalPessoas > 0) ? (float)somaIdades / totalPessoas : 0;

    // Resultados
    printf("\n--- RESULTADOS ---\n");
    printf("Pessoa mais velha: %s (%d anos)\n", nomeMaisVelho, maisVelho);
    if (mulherMaisJovem != 999)
        printf("Mulher mais jovem: %s (%d anos)\n", nomeMulherJovem, mulherMaisJovem);
    else
        printf("Nenhuma mulher cadastrada.\n");
    printf("Média de idade do grupo: %.2f\n", media);
    printf("Homens com mais de 30 anos: %d\n", homens30);
    printf("Mulheres com menos de 18 anos: %d\n", mulheres18);

    return 0;
}
