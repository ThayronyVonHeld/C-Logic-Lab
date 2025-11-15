#include <stdio.h>

int vetor[10];
int i;

int main() {
    for(i = 0; i < 10; i++) {
        vetor[i] = 9 - i;
    }

    for(i = 0; i < 10; i++) {
        printf("Vetor %d: %d\n", i, vetor[i]);
    }

    return 0;
}
