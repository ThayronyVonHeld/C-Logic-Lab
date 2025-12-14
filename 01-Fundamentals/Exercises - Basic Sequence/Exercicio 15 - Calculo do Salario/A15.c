#include <stdio.h>

int main(){
	
	int horaTotal = 8;
	int hora = 25;
	int dias_trabalho;
	float salario;
	
	printf("Digite quantos dias trabalhou esse mes: ");
		scanf("%d", &dias_trabalho);
	
	salario = dias_trabalho * (horaTotal*hora);
	
	printf("Seu salario esse mes sera de: %.2f", salario);
	
	return 0;	
}
