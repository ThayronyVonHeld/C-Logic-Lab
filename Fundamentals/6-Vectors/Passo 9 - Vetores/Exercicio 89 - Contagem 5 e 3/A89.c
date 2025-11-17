#include<stdio.h>

int main(){
    
    int vetor[10];
    int i;
        
    for(i = 0; i < 10; i++){
        vetor[i] = 3;
    }
     for(i = 0; i < 10; i+=2){
        vetor[i] = 5;
    }

    printf("vetor digitado:\n");
    for(i = 0; i < 10; i++) {
        printf("Vetor %d: %d\n", i+1, vetor[i]);
    }

    return 0;
}
    