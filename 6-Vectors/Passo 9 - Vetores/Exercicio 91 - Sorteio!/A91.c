#include<stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h>    // time()

int main(){
    
    int vetor[7];
    int i;
    
    srand(time(NULL));

    for(i = 0; i < 7; i++ ){
        vetor[i] = rand() % 100;  
    }

    printf("vetor digitado:\n");
    for(i = 0; i < 7; i++) {
        printf("Vetor %d: %d\n", i+1, vetor[i]);
    }

    return 0;
}