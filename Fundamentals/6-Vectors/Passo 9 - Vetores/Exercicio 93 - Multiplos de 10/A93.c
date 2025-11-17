#include <stdio.h>

int main() {
    int vetor[15];
    int i;
        
 
    for(i = 0; i < 15; i++) {
        printf("Digite o %d.o numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    printf("\nVetor digitado:\n");
    for(i = 0; i < 15; i++) {
        printf("Vetor %d: %d\n", i + 1, vetor[i]);
    }

    
    printf("\nPosicoes com multiplos de 10:\n");
    for(i = 0; i < 15; i++) {
        if(vetor[i] % 10 == 0) {
            printf("Posicao %d: valor %d\n", i + 1, vetor[i]);
        }
    }

    return 0;
}
