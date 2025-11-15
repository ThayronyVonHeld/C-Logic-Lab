#include<stdio.h>
#include <string.h>

		void opcoes(int *escolha){
			printf("---------------------------------\n");
			printf("Menu Lista de Dados\n");
			printf("---------------------------------\n");
    		printf("Digite [1] para incluir na lista\n");
   			printf("Digite [2] para consultar a lista\n");
    		printf("Digite [3] para alterar a lista\n");
    		printf("Digite [4] para remover da lista\n");
    		printf("Digite [5] para sair\n");
			printf("Digite sua escolha: ");
   			scanf("%d", escolha);
		

	}
		int main(){
			
			char lista[10][50];
			int continuar;
			int escolha;
			int i, contagem = 0;
			int alterar, remover;
			
			
		do{
		
			opcoes(&escolha);
			printf("------------------------------\n");
			
			if(escolha == 1){
				
				printf("LISTA\n");
				printf("--------------------------\n");
            
         
				for(i = contagem; i < 10; i++){
               	 printf("%d. ", i + 1);
               	 scanf("%s", lista[i]);
               	 	contagem += 1;
               	 	printf("Continuar Adicionando?[1]Sim [0]Nao: ");
                	scanf("%d", &continuar);
             
			 	 if(continuar != 1){
                	
					break;
             	
				}
                
				}
		
        } else if(escolha == 2){
        	printf("Os Dados adicionados foram: \n");
        	for(i = 0; i < contagem; i++){
        		printf("%d. %s\n", i + 1, lista[i]);
			}
        	
		}
		else if (escolha == 3){
			
			printf("Digite o numero da posicao que deseja alterar: ");
			scanf("%d", &alterar);
			
			
			printf("Agora altere o dado:\n");
			printf("%d. ", alterar);
			scanf("%s", lista[alterar - 1]);
		
			printf("Alteracao feita com Sucesso!\n");
		}
		else if (escolha == 4){
			printf("Digite o numero da posicao que deseja remover: ");
			scanf("%d", &remover);
			
			strcpy(lista[remover - 1], "   ");
			
			printf("Removido com SUCESSO!\n");
			
	}
		}
    
	
    while(escolha != 5);
}

        
         