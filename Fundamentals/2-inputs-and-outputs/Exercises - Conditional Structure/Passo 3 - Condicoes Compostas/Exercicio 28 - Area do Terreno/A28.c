#include<stdio.h>

int main(){
    
    float largura, comprimento, area;

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    if (area < 100){
    printf("Seu terreno possui %.2f m², e um terreno POPULAR", area);
    }

    else if ((area >= 100) && (area < 500)){
        printf("Seu terreno possui %.2f m², e um terreno MASTER", area);
    }
    else 
    printf("Seu terreno possui %.2f m², e um terreno VIP", area);

    return 0;
}