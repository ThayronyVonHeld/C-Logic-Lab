#include <stdio.h>

int main()
{

    int l1, l2, l3;
    
    printf("Digite o valor de uma reta: ");
    scanf("%d", &l1);

    printf("Digite o valor da segundo reta: ");
    scanf("%d", &l2);

    printf("Digite o valor da terceira reta: ");
    scanf("%d", &l3);

    if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1))
        printf("Parabens, voce acabou de formar um triangulo");

    else
        printf("Ah que pena, esses valores nao e possivel formar um triangulo");
}