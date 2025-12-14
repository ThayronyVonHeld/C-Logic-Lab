#include <stdio.h>

int main() {
	float n1, n2, media = 0;
	
	printf("Digite sua primeira nota: ");
		scanf("%f", &n1);
	
	printf("digite sua segunda nota: ");
		scanf("%f", &n2);
		
media = (n1 + n2) /2;

	printf("a sua media e de: %.2f", media);

return 0;
}
