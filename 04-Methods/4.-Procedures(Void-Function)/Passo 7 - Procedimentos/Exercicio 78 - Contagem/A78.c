#include<stdio.h>

int contagem;

void contador (int inicio, int fim, int incremento){

    for(contagem = inicio; contagem < fim; contagem+=incremento){
    printf("%d >>", contagem);
    }
}

int main(){
    int init, end, jump;
    printf("Digite o Inicio da contagem: ");
    scanf("%d", &init);

    printf("Digite ate onde deseja contar: ");
    scanf("%d", &end);

    printf("Digite o salto: ");
    scanf("%d", &jump);

    contador(init, end,jump);

    return 0;
}