#include <stdio.h>

int n1, antecessor, sucessor = 0;

int main(){
	
	printf("Digite um numero: ");
		scanf("%d", &n1);
		
	antecessor = n1 - 1;
	sucessor = n1 + 1;
	
	printf("o antecessor de %d e igual a %d\n ", n1, antecessor);
	printf("o sucessor de %d e igual a %d", n1, sucessor);
}
