#include<stdio.h>
#include <conio.h>

int main(){

char jogador1[50], jogador2[50];
int escolha_jogador1, escolha_jogador2;

    printf("Digite o nome do primeiro Jogador: ");
    scanf("%s", jogador1);

    printf("Digite o nome do segundo Jogador: ");
    scanf("%s", jogador2);

printf("Bem vindo ao Minigame, %s, escolha entre\n", jogador1);
printf("------------------------------------------------\n");
printf("DIGITE [1] PARA [PEDRA]\n");
printf("DIGITE [2] PARA [PAPEL]\n");
printf("DIGITE [3] PARA [TESOURA]\n");
printf("------------------------------------------------\n");
printf("Digite sua escolha: \n");
escolha_jogador1 = getch() - '0';


printf("Bem vindo ao Minigame %s! Agora e a sua vez!\n", jogador2);
printf("------------------------------------------------\n");
printf("DIGITE [1] PARA [PEDRA]\n");
printf("DIGITE [2] PARA [PAPEL]\n");
printf("DIGITE [3] PARA [TESOURA]\n");
printf("------------------------------------------------\n");
printf("Digite sua escolha: \n");
escolha_jogador2 = getch() - '0';

if (((escolha_jogador1 == 1) && (escolha_jogador2 == 1)) || ((escolha_jogador1 == 2) && (escolha_jogador2 == 2)) || ((escolha_jogador1 == 3) && (escolha_jogador2 == 3))){
    printf("----------------------------------------\n");
   printf("Parabens %s e %s, Voce dois ganharam, ou seja, Houve um EMPATE!!\n", jogador1, jogador2);
   printf("%s, escolheu: %d\n", jogador1, escolha_jogador1);
   printf("%s, escolheu: %d\n", jogador2, escolha_jogador2);
   printf("-----------------------------------------");
}
else if ((escolha_jogador1 == 1) && (escolha_jogador2 == 2)){
    printf("----------------------------------------\n");
   printf("Parabens %s, Voce Ganhou!\n\n", jogador2);
   printf("%s, escolheu: PEDRA\n", jogador1);
   printf("%s, escolheu: PAPEL\n", jogador2);
   printf("-----------------------------------------");
}
else if ((escolha_jogador1 == 1) && (escolha_jogador2 == 3)){
    printf("----------------------------------------\n");
   printf("Parabens %s, Voce Ganhou!\n\n", jogador1);
   printf("%s, escolheu: PEDRA\n", jogador1);
   printf("%s, escolheu: TESOURA\n", jogador2);
   printf("-----------------------------------------");
}
    else if ((escolha_jogador1 == 2) && (escolha_jogador2 == 1)){
    printf("----------------------------------------\n");
   printf("Parabens %s, Voce Ganhou!\n\n", jogador1);
   printf("%s, escolheu: PAPEL\n", jogador1);
   printf("%s, escolheu: PEDRA\n", jogador2);
   printf("-----------------------------------------");
   }
    else if ((escolha_jogador1 == 2) && (escolha_jogador2 == 3)){
    printf("----------------------------------------\n");
   printf("Parabens %s, Voce Ganhou!\n\n", jogador2);
   printf("%s, escolheu: PAPEL\n", jogador1);
   printf("%s, escolheu: TESOURA\n", jogador2);
   printf("-----------------------------------------");
   }
    else if ((escolha_jogador1 == 3) && (escolha_jogador2 == 1)){
    printf("----------------------------------------\n");
   printf("Parabens %s, Voce Ganhou!\n\n", jogador2);
   printf("%s, escolheu: TESOURA\n", jogador1);
   printf("%s, escolheu: PEDRA\n", jogador2);
   printf("-----------------------------------------");
    }
   else if ((escolha_jogador1 == 3) && (escolha_jogador2 == 2)){
    printf("----------------------------------------\n");
   printf("Parabens %s, Voce Ganhou!\n\n", jogador1);
   printf("%s, escolheu: TESOURA\n", jogador1);
   printf("%s, escolheu: PAPEL\n", jogador2);
   printf("-----------------------------------------");
   }
else 
printf("Error! Voce digitou uma opcao INVALIDA\n");
printf("Tente novamente.");

return 0;
}
