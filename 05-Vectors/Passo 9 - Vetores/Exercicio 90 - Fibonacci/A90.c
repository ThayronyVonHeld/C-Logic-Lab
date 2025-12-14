#include <stdio.h>

int main() {
    int vetor[15];
    int i;


    vetor[0] = 1;
    vetor[1] = 1;

    for (i = 2; i < 15; i++) {
        vetor[i] = vetor[i-1] + vetor[i-2];
    }

    for (i = 0; i < 15; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    for (i = 0; i < 15; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
