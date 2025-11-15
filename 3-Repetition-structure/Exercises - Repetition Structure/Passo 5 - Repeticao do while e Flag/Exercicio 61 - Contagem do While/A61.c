#include <stdio.h>

int main() {
    int contador = 0;

    do {
        printf("%d\n", contador);
        contador += 3;   // soma de 3 em 3
    } while (contador <= 30);

    return 0;
}
