#include <stdio.h>

// Procedimento que recebe um parâmetro (mensagem)
void gerador(char mensagem[]) {
    printf("+-------=======------+\n");
    printf("%s\n", mensagem);
    printf("+-------=======------+\n");
}

int main() {
    // Chamando com mensagens diferentes
    gerador("Aprendendo Procedimentos");
    gerador("Testando com outra frase");
    return 0;
}
