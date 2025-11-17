#include <stdio.h>

int main() {

int contador, t1, t2, t3;

t1 = 0;
t2 = 1;

for (contador = 1; contador <= 20; contador++) {
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
return 0;
}