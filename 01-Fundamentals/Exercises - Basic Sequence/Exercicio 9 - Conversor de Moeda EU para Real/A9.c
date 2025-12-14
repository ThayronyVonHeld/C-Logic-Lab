#include <stdio.h>

float valor, converter;

int main(){
	
	printf("digite quanto possui em sua carteira[REAL]: ");
	scanf("%f", &valor);
	
converter =	valor / 6.30;

printf("Voce pode comprar %f euros", converter);
}
