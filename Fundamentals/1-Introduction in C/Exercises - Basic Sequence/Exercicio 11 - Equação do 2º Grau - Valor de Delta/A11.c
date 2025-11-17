#include <stdio.h>
#include <math.h>

double A, B, C, delta; 

int main() { 

	printf("Digite o valor de A: ");
		scanf("%lf", &A);
		
	printf("Digite o valor de B: ");
		scanf("%lf", &B);
		
	printf("Digite o valor de C: ");
		scanf("%lf", &C);
	
	delta = (pow(B, 2)-4*A*C);
	
printf("O valor de delta e igual a: %.2f\n", delta); 

}
