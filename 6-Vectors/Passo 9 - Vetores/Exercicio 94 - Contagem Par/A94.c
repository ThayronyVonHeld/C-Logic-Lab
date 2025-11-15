#include <stdio.h>

int main() {
    int vetor[10];
    int i;
        
 
    for(i = 0; i < 10; i++) {
        printf("Digite o %d.o numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    printf("\nVetor digitado:\n");
    for(i = 0; i < 10; i++) {
        printf("Vetor %d: %d\n", i + 1, vetor[i]);
    }

    printf("\nPosicoes com os numeros pares digitados\n");
    for(i = 0; i < 10; i++) {
        if(vetor[i] % 2 == 0) {
            printf("Posicao %d: valor PAR %d\n", i + 1, vetor[i]);
        }
    }
}