#include<stdio.h>

int contador, t1, t2, t3;

void Fibonacci(int final){
t1 = 0;
t2 = 1;

for (contador = 1; contador <= final; contador++) {
    if (contador == 1) {
        printf("%d ", t1);
    } else if (contador == 2) {
        printf("%d ", t2);
    } else {
        t3 = t1 + t2;
        printf("%d ", t3);
        t1 = t2;
        t2 = t3;
    }
}
}

int main(){

    int termo;

printf("Digite ate o termo deseja da Sequencia de Fibonacci: ");
scanf("%d", &termo);
Fibonacci(termo);

return 0;
}
