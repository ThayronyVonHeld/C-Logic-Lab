#include<stdio.h>

int main(){
	
	int contador, soma=0;
	
	contador = 8;
	
	while(contador <= 100){
	printf("%d\n", contador);
	soma = soma + contador;
	contador+=2;
	
	
}

printf("A soma total dos numeros entre 8 e 100 e de:%d", soma);
	
return 0;
}
