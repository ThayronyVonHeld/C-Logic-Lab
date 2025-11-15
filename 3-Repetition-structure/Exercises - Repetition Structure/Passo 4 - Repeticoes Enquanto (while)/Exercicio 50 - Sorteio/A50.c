#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int contador = 1, acima5 = 0, divisiveis3 = 0, sorteio;

    srand(time(NULL));

    while (contador <= 20)
    {
        printf("[%d] sorteio:\n", contador);

        sorteio = (rand() % 10) + 1;

        printf("[Numero sorteado]: %d\n", sorteio);

        if (sorteio > 5)
        {
            acima5++;
        }
        if (sorteio % 3 == 0)
        {
            divisiveis3++;
        }
        contador++;
    }

    printf("Total acima de 5: [%d]\n", acima5);
    printf("Total divisiveis por 3:[%d]\n", divisiveis3);
    return 0;
}
