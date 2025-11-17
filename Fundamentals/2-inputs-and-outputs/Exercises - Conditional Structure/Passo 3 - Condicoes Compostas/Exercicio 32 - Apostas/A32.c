#include <stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h>    // time()

int main() {
    int numeroSorteado, escolha;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios com base no tempo atual

    numeroSorteado = (rand() % 5) + 1; // Gera um número aleatório entre 1 e 5
    
    printf("--------------------------------------------\n");
    printf("Ola, Bem vindo ao Jogo de AZAR\n");
    printf("Escolha um numero de 1 a 5\n");
    printf("Se sua escolha for igual a da maquina, voce venceu\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    printf("-------------------------------------------------\n");
    

 
 
	printf("Numero sorteado foi: %d\n", numeroSorteado);   // Exibe o número sorteado (apenas para testes)
    printf("Sua escolha foi: %d\n", escolha);
    
    if(numeroSorteado == escolha){
    	printf("Parabens voce VENCEU\n");
    	printf("----------------------------------");
}
	else 
		printf("Que pena voce PERDEU!\n");
   	 	printf("------------------------------------");	
    return 0;

}
