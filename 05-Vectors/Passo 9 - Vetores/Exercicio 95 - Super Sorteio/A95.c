#include<stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h>    // time()

int main(){
    
    int vetor[30];
    int i, numero = 0;
    int chave = 0; 

    srand(time(NULL));

    for(i = 0; i < 30; i++ ){
        vetor[i] = (rand() % 15) + 1; 
    }

    printf("Digite um numero de 1 a 15: ");
    scanf("%d", &numero);
    for(i = 0; i < 30; i++) {
        if(vetor[i] == numero){
          printf("Vetor %d: [%d] numero escolhido\n", i+1, vetor[i]);
          chave++;  
        }
        printf("Vetor %d: %d\n", i+1, vetor[i]);
    }
printf("O numero %d, foi sorteada %d vezes", numero, chave);
    return 0;
}