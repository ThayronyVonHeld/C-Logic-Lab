#include <stdio.h>

int main() {
    int contador = 0, par = 0, impar = 0, numero;
    
    while (contador < 6) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        if (numero % 2 == 0) {
            par++;
        } else {
            impar++;
        }
        
        contador++;
    }
    
    printf("Dos 6 numeros digitados, %d sao pares e %d sao impares\n", par, impar);
    
    return 0;
}
