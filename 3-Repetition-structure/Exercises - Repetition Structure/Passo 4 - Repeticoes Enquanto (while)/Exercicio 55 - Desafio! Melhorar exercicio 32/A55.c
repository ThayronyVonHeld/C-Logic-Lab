#include <stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h>    // time()

int main() {
    int numeroSorteado, escolha = 0, escolhas = 0, contador = 1;

    srand(time(NULL)); // Inicializa o gerador de n�meros aleat�rios com base no tempo atual

    numeroSorteado = (rand() % 10) + 1; // Gera um n�mero aleat�rio entre 1 e 5
    
 printf("--------------------------------------------\n");
    printf("Ola, Bem vindo ao Jogo de AZAR\n");
    printf("Escolha um numero de 1 a 10\n");
    printf("Se sua escolha for igual a da maquina, voce venceu\n");
    printf("Voce tera 4 tentativas!\n");

while(contador <= 4){
   
    printf("--------------------------------------------\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    contador++;
}
    
    if(numeroSorteado == escolha){
    	printf("Parabens voce VENCEU\n");
        printf("O numero sorteado foi: %d\n", numeroSorteado);
    	printf("----------------------------------");
}
	if(numeroSorteado != escolha){ 
		printf("Que pena voce PERDEU!\n");
        printf("O numero sorteado foi: %d\n", numeroSorteado);
   	 	printf("------------------------------------");
    }

    return 0;
}

