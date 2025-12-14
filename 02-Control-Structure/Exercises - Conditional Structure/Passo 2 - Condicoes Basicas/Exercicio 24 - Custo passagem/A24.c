#include <stdio.h>

int main()
{

    float distancia, valor_viagem;

    printf("Qual distancia deseja viajar [km]: ");
    scanf("%f", &distancia);

    
    if (distancia <= 200)
    {
        valor_viagem = distancia * 0.5;
        printf("Sua viagem ficou no valor de R$ %.2f", valor_viagem);
    }
    else {
        valor_viagem = distancia * 0.45;
           printf("Sua viagem ficou no valor de R$ %.2f", valor_viagem2);
    }
    return 0;
}
