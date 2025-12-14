#include<stdio.h>

int main(){
	
	int contador, soma=0;
	
	contador = 500;
	
	while(contador >= 0){
		printf("%d\n", contador);
		soma = soma + contador;
		contador -= 50;
	}
	printf("A soma total dos numeros entre 500 e 0 de 5 em 5 e de:%d", soma);
	return 0;
}
