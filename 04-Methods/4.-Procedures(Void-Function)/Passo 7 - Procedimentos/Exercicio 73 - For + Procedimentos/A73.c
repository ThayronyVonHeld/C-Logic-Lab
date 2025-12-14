#include <stdio.h>

// Procedimento que recebe um parâmetro (mensagem)
void gerador(char mensagem[], int repeticao) {
    printf("+-------=======------+\n");
    
    for(repeticao = 0; repeticao < 4; repeticao++){
    printf("%s\n", mensagem);
}
    printf("+-------=======------+\n");
}

int main() {
    
    gerador("Aprendendo Procedimentos", 4);
    return 0;
}
