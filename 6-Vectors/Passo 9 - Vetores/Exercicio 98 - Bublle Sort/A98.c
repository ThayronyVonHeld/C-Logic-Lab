#include<stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h>    // time()

int main(){

    int vetor[20];
    int i, j, aux;

    srand(time(NULL));
    
    for(i = 0; i < 20; i++){
        vetor[i] = (rand() % 100) + 1;    
    }

    printf("\n---------------------------------------------------\n ");
    printf("Numeros criados:\n");
    printf("----------------------------------------------------\n");

    for(i = 0; i < 20; i++){
    printf("vetor %d: %d\n", i + 1, vetor[i]);
    }

    for (i = 0; i < 19; i++) {              
        for (j = 0; j < 19 - i; j++) {      
            if (vetor[j] > vetor[j + 1]) {  
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    printf("\n---------------------------------------------------\n");
    printf("Numeros em ordem crescente (Bubble Sort):\n");
    printf("---------------------------------------------------\n");
    for (i = 0; i < 20; i++) {
        printf("vetor[%2d] = %2d\n", i + 1, vetor[i]);
    }

    return 0;
}