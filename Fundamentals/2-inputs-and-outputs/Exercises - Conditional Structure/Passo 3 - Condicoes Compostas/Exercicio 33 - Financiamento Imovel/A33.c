#include<stdio.h>

int main(){
	
	float casa = 0, salario = 0, prestacao, condicao;
	int anos = 0, mes = 0;
	
	printf("-----------------------------------------------\n");
	printf("Bem vindo ao Simulador de Financiamento de Imovel\n");
	printf("Precisamos saber de alguns dados para prosseguir a simulacao\n");
	printf("Digite o valor da casa: ");
	scanf("%f", &casa);
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	printf("Em quantos anos pretende pagar: ");
	scanf("%d", &anos);
	printf("----------------------------------------------------\n");
	
	mes = anos * 12;
	prestacao = casa / mes;
	condicao = salario * 0.3;
	
	if(prestacao < condicao){
		printf("----------------------------------------------------\n");
		printf("Parabens, suas chances de aprovacao sao altas\n");
		printf("Seu salario corresponde com a condicao para solicitar um financiamento\n");
		printf("Entre em contato com o banco para mais informacoes\n");	
		printf("----------------------------------------------------");
	}
	else {
	printf("-------------------------------------------------------\n");
	printf("Ah que pena, suas chances de aprovacao sao baixas!\n");
	printf("Seu salario NAO corresponde com a condicao minima para solicitar um financiamento\n");
	printf("tente aumentar sua renda ou tente pagar em um tempo maior\n");
	printf("Entre em contato com o banco para mais informacoes\n");	
	printf("--------------------------------------------------------");
}
	return 0;

	}
	

