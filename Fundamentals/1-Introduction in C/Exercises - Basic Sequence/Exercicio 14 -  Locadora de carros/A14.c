#include <stdio.h>

int main() {
    float km_percorrido, dias_alugado, total_a_pagar;

    printf("Digite quantos dias o carro esteve alugado: ");
    scanf("%f", &dias_alugado);

    printf("Digite quantos km foram percorridos: ");
    scanf("%f", &km_percorrido);

    total_a_pagar = (km_percorrido * 0.2) + (dias_alugado * 90);

    printf("O total a pagar pelo aluguel e de: R$ %.2f\n", total_a_pagar);

    return 0;
}

