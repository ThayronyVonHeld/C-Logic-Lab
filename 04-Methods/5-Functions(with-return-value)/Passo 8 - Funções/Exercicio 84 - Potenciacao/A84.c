#include<stdio.h>

int Potencia(int base, int expoente){
    int resultado = 1;
    for(int i = 0; i < expoente; i++){
        resultado *= base;
    }
    return resultado;
}
int main(){
    int base, expoente, resultado;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    resultado = Potencia(base, expoente);
    printf("%d elevado a %d e igual a %d", base, expoente, resultado);
    return 0;
}