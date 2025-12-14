#include <stdio.h>

int salario = 0;
char nome[50];

int main(){
	printf("Qual seu nome ?");
	scanf("%s", nome);
	
	printf("Agora digite seu salario: ");
	scanf ("%d", &salario);
	
	printf("%s seu salario e de %d\n", nome, salario);
}
