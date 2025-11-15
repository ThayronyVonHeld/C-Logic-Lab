#include <stdio.h>

int main() {
    int primeiro_termo, razao;
    int termos[10];  
    int soma = 0;
    
    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiro_termo);
    
    printf("Digite a razao da PA: ");
    scanf("%d", &razao);
   
    for(int i = 0; i < 10; i++) {
        termos[i] = primeiro_termo + i * razao;
    }

    printf("\nOs 10 primeiros termos da PA sao:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d", termos[i]);
        if(i < 9) printf(", ");
        soma += termos[i];
    }
    
    printf("\n\nA soma dos 10 primeiros termos e: %d\n", soma);
    
    return 0;
}
