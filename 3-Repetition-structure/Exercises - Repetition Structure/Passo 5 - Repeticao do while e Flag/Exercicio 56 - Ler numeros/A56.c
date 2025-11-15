#include <stdio.h>

int main() {
    int soma = 0;       // inicializando em 0
    int numero;
    int continuar = 1;  // flag: 1 = continuar, 0 = parar

    while (continuar) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
      
        soma += numero;

        if (soma > 1111) {
            continuar = 0;  // altera a flag, sai do loop
        }
    }

    printf("Voce chegou no limite. A soma dos numeros digitados e: %d\n", soma);

    return 0;
}
