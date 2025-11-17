#include <stdio.h>

float n1, dobro, tercaparte = 0;

int main(){
	
	printf("Digite um numero: ");
		scanf("%f", &n1);
		
	dobro = n1 * 2;
	tercaparte = n1 / 3;
	
	printf("O dobro de %.1f e igual a %.2f\n ", n1, dobro);
	printf("A terca parte de %.1f e igual a %.2f", n1, tercaparte);
}
