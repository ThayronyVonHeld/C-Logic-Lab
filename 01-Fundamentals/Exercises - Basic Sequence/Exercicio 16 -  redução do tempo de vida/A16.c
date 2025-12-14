#include <stdio.h>

int main(){

	int cigarros, anos;
	float minutos_perdidos, anos_fumados;
	float convert_vida_perdida, vida_perdida, total_fumados;

	printf("Quantos cigarros voce costuma fumar por dia? ");
		scanf("%d", &cigarros);
	
	printf("Ha quantos anos voce fuma? ");
		scanf("%d", &anos);
		
		anos_fumados = anos*365; 
		total_fumados = cigarros * anos_fumados; // multiplicando o total de cigarros fumados
			
			vida_perdida = total_fumados * 10; // total de cigarros fumados * 10 minutos

			convert_vida_perdida = vida_perdida / 1440; //convertando para dias


	printf("Parabens, voce perdeu %.2f dias da sua vida!", convert_vida_perdida);	    
	
	return 0;
	
	}

