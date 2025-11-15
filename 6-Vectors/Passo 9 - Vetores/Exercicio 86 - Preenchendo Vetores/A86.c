#include<stdio.h>

int main(){
    
    int vetor[8];
    int i;
        
    for(i = 0; i < 8; i++ ){
        vetor[i] = 999;
    }

    printf("vetor digitado:\n");
    for(i = 0; i < 8; i++) {
        printf("Vetor %d: %d\n", i+1, vetor[i]);
    }

    return 0;
}
    