#include <stdio.h>

int main() {
	
	float salario, aumento;
	
	printf("Digite seu salario: ");
		scanf("%f", &salario);
	
	aumento = salario + (salario*0.15);
	
	printf("Seu novo salario com 15 por cento de aumento foi de: %.2f", aumento);
	
	return 0;
	
}
