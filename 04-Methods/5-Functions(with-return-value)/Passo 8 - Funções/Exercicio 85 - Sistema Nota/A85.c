#include <stdio.h>


float Media(int a, int b) {
    return (a + b) / 2.0; 
}


void Situacao(float media) {
    if (media < 5.0) {
        printf("Sua media foi de: %.2f. Voce foi REPROVADO :(\n", media);
    }
    else if (media >= 5.0 && media < 7.0) {
        printf("Sua media foi de: %.2f. Voce esta de RECUPERACAO.\n", media);
    }
    else {
        printf("Parabens! Sua media foi de: %.2f. Voce foi APROVADO!\n", media);
    }
}

int main() {
    int N1, N2;
    float resultado;

    printf("Digite a nota da AVA1: ");
    scanf("%d", &N1);

    printf("Digite a nota da AVA2: ");
    scanf("%d", &N2);

    resultado = Media(N1, N2);  
    Situacao(resultado);        

    return 0;
}
