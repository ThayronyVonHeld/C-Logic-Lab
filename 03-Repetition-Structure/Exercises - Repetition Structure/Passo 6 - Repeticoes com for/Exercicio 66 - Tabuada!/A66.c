#include<stdio.h>

int main(){

int indice = 0, contador, resultado = 0;

printf("Digite um numero: ");
scanf("%d", &indice);
for(contador = 0; contador <= 10; contador++){
resultado = indice * contador;
printf("%d x %d = %d\n", indice, contador, resultado);
}
return 0;

}