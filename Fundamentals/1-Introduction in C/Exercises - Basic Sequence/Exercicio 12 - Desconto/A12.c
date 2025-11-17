#include <stdio.h>

int main(){
	float produto, desconto; 
	
	printf("Digite o valor do produto: ");
		scanf("%f", &produto);
		
 desconto = produto - (produto*0.05);
 
	printf("O valor do produto com desconto de 5 por cento e de: %.2f", desconto);

return 0;
}
