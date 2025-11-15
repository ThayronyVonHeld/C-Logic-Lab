#include<stdio.h>

int main(){
    
    int vetor[10] = {0};
    int i;
        
    for(i = 0; i < 10; i++) {
        vetor[i] = (i + 1) * 5;
    }
    
    for(i = 0; i < 10; i++) {
        printf("Vetor %d: %d\n", i+1, vetor[i]);
    }

    return 0;
}
    