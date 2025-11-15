#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int carro, dias = 0;
	float valor_total, km;
	
	printf("-----------------------------------------------\n");
		printf("Bem vindo ao pagamento do CARRO ALUGADO\n");
			printf("Antes precisamos verificar algumas informações\n");
				printf("-----------------------------------------------\n");
					printf("Digite [1] para carro de Luxo\n");
						printf("Digite [2] para carro popular\n");
							printf("-----------------------------------------------\n");
								printf("Qual carro voce alugou?: ");
									scanf("%d", &carro);
	
									printf("Quantos dias o carro esteve alugado? ");
							scanf("%d", &dias);
						printf("Quantos KM foram percorridos? ");
					scanf("%f", &km);
				printf("-----------------------------------------------\n");
	
	
	if((carro == 1) && (km < 200)){
		valor_total = (0.30*km) + (dias*150);
			printf("O valor Total a ser pago é: %.2f", valor_total);	
	}
			else if ((carro == 1) && (km>=200)){
				valor_total = (0.25*km) + (dias*150);
					printf("O valor Total a ser pago é: %.2f", valor_total);
	}
						else if((carro == 2) && (km < 100)){
							valor_total = (0.20*km) + (dias*90);
								printf("O valor Total a ser pago é: %.2f", valor_total);
	}
							else if((carro == 2) && (km >= 100)){
						valor_total = (0.10*km) + (dias*90);
					printf("O valor Total a ser pago é: %.2f", valor_total);	
	}
				else {
			printf("Dados Incorretos Repita a Operação!!!!");
	}
		return 0;
}
