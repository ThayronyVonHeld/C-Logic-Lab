#include <stdio.h>

void gerador(char mensagem[], int repeticao, int borda) {
    int i;

    if(borda == 1){ 
        printf("+-------=======------+\n");}
    else if(borda == 2){
        printf("~~~~~~~~:::::::~~~~~~\n");}
    else if(borda == 3){
        printf("<<<<<<<<------->>>>>>>\n");}
    
    for(i = 0; i < repeticao; i++){
    printf("%s\n", mensagem);
}
 if(borda == 1){ 
        printf("+-------=======------+\n");}
    else if(borda == 2){
        printf("~~~~~~~~:::::::~~~~~~\n");}
    else if(borda == 3){
        printf("<<<<<<<<------->>>>>>>\n");}
}

int main() {
    
    gerador("Aprendendo Procedimentos", 3,2);
    return 0;
}
