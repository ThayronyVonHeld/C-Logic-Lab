#include<stdio.h>

int main(){

    int contagem = 1;
    float altura = 0, peso = 0, media = 0, mediaaltura = 0; 
    int peso90 = 0, alturapesobaixo = 0, alturapesoalto = 0;

    while (contagem <= 7)
    {

        printf("------------------------------\n");
        printf("Digite o peso[kg]: ");
        scanf("%f", &peso);

        if (peso > 90){
        peso90++;
        }
        
        printf("Digite agora a altura[m]: ");
        scanf("%f", &altura);
        
        mediaaltura += altura;
        
        if((peso < 50) && (altura < 1.60)){
        alturapesobaixo++;
        }
        
        if((peso > 100) && (altura > 1.90)){
        alturapesoalto++;
        }

        contagem++;
    }

    media = mediaaltura / 7;

    printf("A media de altura do grupo e igual a: %.2f\n", media);
    printf("%d pessoa(s) pesa(m) mais que 90Kg\n", peso90);
    printf("%d pessoa(s) pesa(m) menos de 50Kg e tem menos de 1.60m\n", alturapesobaixo);
    printf("%d pessoa(s) mede(m) mais de 1.90m e pesam mais de 100Kg", alturapesoalto);
    

}