#include <stdio.h>

int soma;

void somador(int n1, int n2){
    soma = n1 + n2;
    printf("A soma entre %d e %d é igual a: %d\n", n1, n2, soma);
}

int main(){
    int n1, n2; 

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite outro numero: ");
    scanf("%d", &n2);

    somador(n1, n2); 
    return 0;
}
