#include <stdio.h>

int main()
{
    char nome[50];
    float salario, aumento;
    int tempo_trabalho;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Ha quantos anos trabalha na empresa? ");
    scanf("%d", &tempo_trabalho);

    if (tempo_trabalho < 3)
    {
         aumento = (salario * 3/100) + salario;
    printf("Parabens %s, voce teve um aumento de 3%% e seu salario sera de: %.2f ", nome, aumento);
    }

    else if ((tempo_trabalho >= 3) && (tempo_trabalho < 10))
    {
        aumento = (salario * 12.5 / 100) + salario;
        printf("Parabens %s, voce teve um aumento de 12,5%% e seu salario sera de: %.2f ", nome, aumento);
    }
    else{
        aumento = (salario * 20 / 100) + salario;
    printf("Parabens %s, voce teve um aumento de 20%% e seu salario sera de: %.2f ", nome, aumento);
    }
    return 0;
}