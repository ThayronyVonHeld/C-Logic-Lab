#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura do nó da lista
typedef struct Nodo {
    char dado[50];
    struct Nodo *prox;
} Nodo;

// Função de menu
void opcoes(int *escolha) {
    printf("---------------------------------\n");
    printf("Menu Lista de Dados\n");
    printf("---------------------------------\n");
    printf("Digite [1] para incluir na lista\n");
    printf("Digite [2] para consultar a lista\n");
    printf("Digite [3] para alterar a lista\n");
    printf("Digite [4] para remover da lista\n");
    printf("Digite [5] para sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", escolha);
}

// Inserir novo nó
void incluir(Nodo **inicio) {
    Nodo *novo = (Nodo *)malloc(sizeof(Nodo));
    if (!novo) {
        printf("Erro ao alocar memória!\n");
        return;
    }

    printf("Digite o dado: ");
    scanf("%s", novo->dado);
    novo->prox = NULL;

    if (*inicio == NULL) {
        *inicio = novo;
    } else {
        Nodo *atual = *inicio;
        while (atual->prox != NULL)
            atual = atual->prox;
        atual->prox = novo;
    }

    printf("Item adicionado com sucesso!\n\n");
}

// Listar dados
void consultar(Nodo *inicio) {
    if (inicio == NULL) {
        printf("A lista está vazia.\n\n");
        return;
    }

    printf("Os Dados adicionados foram:\n");
    int i = 1;
    while (inicio != NULL) {
        printf("%d. %s\n", i, inicio->dado);
        inicio = inicio->prox;
        i++;
    }
    printf("\n");
}

// Alterar dado em uma posição
void alterar(Nodo *inicio) {
    if (inicio == NULL) {
        printf("A lista está vazia.\n\n");
        return;
    }

    int posicao, i = 1;
    printf("Digite o número da posição que deseja alterar: ");
    scanf("%d", &posicao);

    Nodo *atual = inicio;
    while (atual != NULL && i < posicao) {
        atual = atual->prox;
        i++;
    }

    if (atual == NULL) {
        printf("Posição inválida!\n\n");
        return;
    }

    printf("Digite o novo dado: ");
    scanf("%s", atual->dado);
    printf("Alteração feita com sucesso!\n\n");
}

// Remover nó em uma posição
void remover(Nodo **inicio) {
    if (*inicio == NULL) {
        printf("A lista está vazia.\n\n");
        return;
    }

    int posicao, i = 1;
    printf("Digite o número da posição que deseja remover: ");
    scanf("%d", &posicao);

    Nodo *atual = *inicio;
    Nodo *anterior = NULL;

    while (atual != NULL && i < posicao) {
        anterior = atual;
        atual = atual->prox;
        i++;
    }

    if (atual == NULL) {
        printf("Posição inválida!\n\n");
        return;
    }

    if (anterior == NULL)
        *inicio = atual->prox;
    else
        anterior->prox = atual->prox;

    free(atual);
    printf("Removido com sucesso!\n\n");
}

// Principal
int main() {
    Nodo *inicio = NULL;
    int escolha;

    do {
        opcoes(&escolha);
        printf("------------------------------\n");

        if (escolha == 1)
            incluir(&inicio);
        else if (escolha == 2)
            consultar(inicio);
        else if (escolha == 3)
            alterar(inicio);
        else if (escolha == 4)
            remover(&inicio);

    } while (escolha != 5);

    // Liberar memória
    Nodo *temp;
    while (inicio != NULL) {
        temp = inicio;
        inicio = inicio->prox;
        free(temp);
    }

    printf("Programa encerrado.\n");
    return 0;
}