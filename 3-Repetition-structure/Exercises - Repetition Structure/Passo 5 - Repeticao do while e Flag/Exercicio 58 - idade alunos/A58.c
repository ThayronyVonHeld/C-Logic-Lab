#include <stdio.h>

int main() {
    int idade = 0, soma = 0, cont = 0;
    float media;
    int flag = 1;  // flag de controle (1 = continua, 0 = para)

    while (flag) {
        printf("Digite a idade do aluno: ");
        scanf("%d", &idade);

        if (idade < 0) {
            printf("Digite uma idade valida.\n");
        } else {
            soma += idade;
            cont++;

            if (soma >= 999) { 
                flag = 0;  // desliga o loop quando atinge o limite
            }
        }
    }

    if (cont > 0) {
        media = soma / cont;
        printf("A media das idades dos alunos e: %.2f\n", media);
        printf("Havia na turma %d alunos.\n", cont);
    } else {
        printf("Nenhum aluno valido foi registrado.\n");
    }

    return 0;
}
