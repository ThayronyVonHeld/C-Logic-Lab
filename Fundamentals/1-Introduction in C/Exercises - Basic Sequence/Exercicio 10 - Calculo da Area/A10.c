#include <stdio.h>

float altura, largura;
float area, tinta;

int main() {

	printf("Digite a altura da parede: ");
		scanf("%f", &altura);

	printf("Digite a largura da parede: ");
		scanf("%f", &largura);

area = altura * largura;

tinta = area/2;

	printf("A area a ser pintada e %.2f metros quadrados\n", area);
	printf("O total de tinta necessaria para pintar a parede e %.2f litros", tinta);
}
