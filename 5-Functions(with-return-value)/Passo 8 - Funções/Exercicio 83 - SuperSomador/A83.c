#include<stdio.h>

int SuperSomador(int a, int b){
    int i, soma;
    
    for(i = a; i <= b; i++){
        printf("%d ", i);
        soma += i;
    }
        
    return soma;
}

int main(){
    int x, y, resultado;;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &y);

    resultado = SuperSomador(x, y);
    printf("\nA soma dos numeros entre %d e %d e: %d", x, y, resultado);
   
    return 0;
}