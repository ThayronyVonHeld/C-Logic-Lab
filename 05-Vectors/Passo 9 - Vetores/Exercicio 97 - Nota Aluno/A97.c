#include <stdio.h>

int main() {
    int nota[10];
    int i, soma = 0;
    int maior_nota = 0; 
    float media = 0;
    int acima_media = 0;


    for (i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", &nota[i]);
        soma += nota[i];

        if (nota[i] > maior_nota) {
            maior_nota = nota[i];
        }
    }

    media = soma / 10.0;

    printf("\nA media da turma e: %.2f\n", media);


    for (i = 0; i < 10; i++) {
        if (nota[i] > media) {
            acima_media++;
        }
    }
    printf("Quantidade de alunos acima da media: %d\n", acima_media);

    printf("A maior nota foi: %d\n", maior_nota);

    
    printf("A maior nota aparece nas posicoes: ");
    for (i = 0; i < 10; i++) {
        if (nota[i] == maior_nota) {
            printf("%d ", i);  
        }
    }
    printf("\n");

    return 0;
}
