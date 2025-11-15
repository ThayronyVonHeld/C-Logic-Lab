#include <stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h>    // time()

int main() {
    int matriz[3][3];
    int c, l;

    srand(time(NULL));
    
    for (c = 0; c < 3; c++) {          
        for (l = 0; l < 3; l++) {      
           matriz[c][l] = rand() % 20;
        }
    }

    printf("\nMatriz digitada:\n");
    for (c = 0; c < 3; c++) {
        for (l = 0; l < 3; l++) {
            if(matriz[c][l] % 2 == 0 ){
                printf("[%d] ", matriz[c][l]);
            }
            else{
            printf("%d ", matriz[c][l]);
            }
        }
        printf("\n");
    }

    return 0;
}