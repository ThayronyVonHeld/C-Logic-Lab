#include<stdio.h>
#include <string.h>

int main(){
    
    char vetor[7][20];
    int i;
        
    for(i = 0; i < 7; i++ ){
        printf("Digite o %do. nome: ", i+1);
        scanf("%s", &vetor[i]);
    }

    for(i = 0; i < 7; i++) {
        printf("Vetor %d: %s\n", i+1, vetor[i]);
    }

    return 0;
}