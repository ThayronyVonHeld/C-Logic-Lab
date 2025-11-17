#include<stdio.h>

void ParOuImpar(int a){
    if(a%2 == 0){
        printf("O numero digitado e PAR!");
    }
    else 
    printf("O numero digitado e IMPAR!");
    
}
 
int main(){
       
    int x;

        printf("Digite um numero inteiro: ");
        scanf("%d", &x);
    
        ParOuImpar(x);

        return 0;
    }
