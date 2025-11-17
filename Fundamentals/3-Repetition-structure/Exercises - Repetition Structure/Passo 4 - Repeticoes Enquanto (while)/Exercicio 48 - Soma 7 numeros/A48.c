#include<stdio.h>

int main(){
    int contador = 0, soma = 0, numero;
    
    while(contador < 7){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma += numero;
        contador++;
    }
    
    printf("Os 7 numeros somados e igual a: %d\n", soma);
    return 0;
}
