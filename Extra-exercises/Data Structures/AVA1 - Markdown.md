# 📚 AVA 1 - Lista Simplesmente Encadeada (CRUD em C)

---

## 🎯 Objetivos Da AVA

* Compreender o conceito de **lista simplesmente encadeada**
* Entender a **estrutura de nós (nodes)** e o **encadeamento por ponteiros**
* Aprender a **criar, inserir, consultar, alterar e remover** elementos
* Construir um **sistema CRUD completo em C**
* Diferenciar **listas estáticas (vetores)** de **listas dinâmicas (encadeadas)**

---

## 🧩 O que é uma Lista Simplesmente Encadeada?

Uma **lista simplesmente encadeada** é uma estrutura de dados **dinâmica** — isso significa que seu tamanho **pode crescer e diminuir durante a execução do programa**.

Diferente de um vetor (que tem tamanho fixo), a lista encadeada é formada por **nós** (*nodes*).
Cada nó contém:

1. Um **valor** (os dados que queremos armazenar)
2. Um **ponteiro para o próximo nó**

---

## 🔹 Estrutura Básica

Em C, representamos cada nó da lista com uma **struct**:

```c
typedef struct Node {
    int dado;              // valor armazenado
    struct Node *prox;     // ponteiro para o próximo nó
} Node;
```

Cada `Node` aponta para outro `Node`, formando uma “corrente” de dados.
O último nó aponta para `NULL`, indicando o fim da lista.

Visualmente:

```
[ Dado | * ] → [ Dado | * ] → [ Dado | NULL ]
```

---

## 🧠 Como funciona o encadeamento?

A lista começa com um **ponteiro principal**, geralmente chamado `inicio` ou `head`, que aponta para o **primeiro nó** da lista.

```c
Node *inicio = NULL; // lista começa vazia
```

Quando criamos um novo nó e inserimos na lista, fazemos algo assim:

```c
Node *novo = malloc(sizeof(Node)); // aloca espaço na memória
novo->dado = 10;
novo->prox = inicio;
inicio = novo;
```

> 💡 Aqui, o novo nó passa a ser o primeiro da lista, e seu “próximo” é o antigo início.

---

## 🔧 Operações Fundamentais da Lista

As listas encadeadas permitem diversas operações.
Vamos entender cada uma delas com pequenos trechos práticos.

---

### 🔹 Inserir Elemento

Inserir no início é a forma mais simples:

```c
void inserirInicio(Node **inicio, int valor) {
    Node *novo = malloc(sizeof(Node));
    novo->dado = valor;
    novo->prox = *inicio;
    *inicio = novo;
}
```

> 💭 Cada novo elemento “empurra” o anterior para frente da lista.

---

### 🔹 Consultar Elementos

Percorremos a lista **até encontrar `NULL`**:

```c
void listar(Node *inicio) {
    Node *atual = inicio;
    while (atual != NULL) {
        printf("%d -> ", atual->dado);
        atual = atual->prox;
    }
    printf("NULL\n");
}
```

---

### 🔹 Alterar Elemento

Buscamos o valor desejado e o substituímos:

```c
void alterar(Node *inicio, int antigo, int novo) {
    Node *atual = inicio;
    while (atual != NULL) {
        if (atual->dado == antigo) {
            atual->dado = novo;
            printf("Valor alterado com sucesso!\n");
            return;
        }
        atual = atual->prox;
    }
    printf("Valor não encontrado!\n");
}
```

---

### 🔹 Remover Elemento

A remoção exige cuidado, pois é necessário **reconectar os ponteiros**.

```c
void remover(Node **inicio, int valor) {
    Node *atual = *inicio;
    Node *anterior = NULL;

    while (atual != NULL && atual->dado != valor) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        printf("Valor não encontrado!\n");
        return;
    }

    if (anterior == NULL) {
        *inicio = atual->prox; // removendo o primeiro nó
    } else {
        anterior->prox = atual->prox;
    }

    free(atual);
    printf("Valor removido com sucesso!\n");
}
```

---

## 💻 Exemplo Completo: CRUD com Lista Simplesmente Encadeada

Agora que entendemos cada parte, vejamos o **programa completo** que realiza as quatro operações:
**Criar, Consultar, Alterar e Remover** (CRUD). Como pede a Avaliação Proposta:

---

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Nodo {
    char dado[50];
    struct Nodo *prox;
} Nodo;


void opcoes(int *escolha) { // Função de menu
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


void incluir(Nodo **inicio) { // Função para inserir um novo nó no final da lista
    Nodo *novo = (Nodo *)malloc(sizeof(Nodo));
    if (!novo) {
        printf("Erro ao alocar memoria!\n");
        return;
    }

    printf("Digite o dado: ");
    scanf("%s", novo->dado);
    novo->prox = NULL;

    if (*inicio == NULL) {
        *inicio = novo;
    } else {
        Nodo *atual = *inicio;
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        atual->prox = novo;
    }

    printf("Item adicionado com sucesso!\n");
}


void consultar(Nodo *inicio) { // Função para listar todos os dados
    if (inicio == NULL) {
        printf("A lista esta vazia.\n");
        return;
    }

    printf("Os Dados adicionados foram:\n");
    int i = 1;
    while (inicio != NULL) {
        printf("%d. %s\n", i, inicio->dado);
        inicio = inicio->prox;
        i++;
    }
}


void alterar(Nodo *inicio) { // Função para alterar um dado em uma posição específica
    if (inicio == NULL) {
        printf("A lista esta vazia.\n");
        return;
    }

    int posicao, i = 1;
    printf("Digite o numero da posicao que deseja alterar: ");
    scanf("%d", &posicao);

    Nodo *atual = inicio;
    while (atual != NULL && i < posicao) {
        atual = atual->prox;
        i++;
    }

    if (atual == NULL) {
        printf("Posição invalida!\n");
        return;
    }

    printf("Digite o novo dado: ");
    scanf("%s", atual->dado);
    printf("Alteração feita com sucesso!\n");
}


void remover(Nodo **inicio) { // Função para remover um nó de uma posição específica
    if (*inicio == NULL) {
        printf("A lista esta vazia.\n");
        return;
    }

    int posicao, i = 1;
    printf("Digite o numero da posicao que deseja remover: ");
    scanf("%d", &posicao);

    Nodo *atual = *inicio;
    Nodo *anterior = NULL;

    while (atual != NULL && i < posicao) {
        anterior = atual;
        atual = atual->prox;
        i++;
    }

    if (atual == NULL) {
        printf("Posicao invalida!\n");
        return;
    }

    if (anterior == NULL) {
        *inicio = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }

    free(atual);
    printf("Removido com sucesso!\n");
}


int main() { 
    Nodo *inicio = NULL;
    int escolha;

    do {
        opcoes(&escolha);
        printf("------------------------------\n");

        if (escolha == 1) {
            incluir(&inicio);
        } else if (escolha == 2) {
            consultar(inicio);
        } else if (escolha == 3) {
            alterar(inicio);
        } else if (escolha == 4) {
            remover(&inicio);
        }

    } while (escolha != 5);

   
    Nodo *temp;  // Libera memória antes de sair
    while (inicio != NULL) {
        temp = inicio;
        inicio = inicio->prox;
        free(temp);
    }

    printf("Programa encerrado.\n");
    return 0;
}

```
---

### 🧠 **Saídas previstas**

#### 🟢 **1. Inclusão**

```
---------------------------------
Menu Lista de Dados
---------------------------------
Digite [1] para incluir na lista
Digite [2] para consultar a lista
Digite [3] para alterar a lista
Digite [4] para remover da lista
Digite [5] para sair
Digite sua escolha: 1
------------------------------
Digite o dado: Joao
Item adicionado com sucesso!
```

---

#### 🟢 **2. Inclusão de outro item**

```
---------------------------------
Menu Lista de Dados
---------------------------------
Digite [1] para incluir na lista
Digite [2] para consultar a lista
Digite [3] para alterar a lista
Digite [4] para remover da lista
Digite [5] para sair
Digite sua escolha: 1
------------------------------
Digite o dado: Maria
Item adicionado com sucesso!
```

---

#### 🟡 **3. Consulta**

```
---------------------------------
Menu Lista de Dados
---------------------------------
Digite [1] para incluir na lista
Digite [2] para consultar a lista
Digite [3] para alterar a lista
Digite [4] para remover da lista
Digite [5] para sair
Digite sua escolha: 2
------------------------------
Os Dados adicionados foram:
1. Joao
2. Maria
```

---

#### 🟠 **4. Alterar um item**

```
---------------------------------
Menu Lista de Dados
---------------------------------
Digite [1] para incluir na lista
Digite [2] para consultar a lista
Digite [3] para alterar a lista
Digite [4] para remover da lista
Digite [5] para sair
Digite sua escolha: 3
------------------------------
Digite o número da posição que deseja alterar: 1
Digite o novo dado: Thayrony
Alteração feita com sucesso!
```

---

#### 🔴 **5. Remover um item**

```
---------------------------------
Menu Lista de Dados
---------------------------------
Digite [1] para incluir na lista
Digite [2] para consultar a lista
Digite [3] para alterar a lista
Digite [4] para remover da lista
Digite [5] para sair
Digite sua escolha: 4
------------------------------
Digite o número da posição que deseja remover: 2
Removido com sucesso!
```

---

#### ⚪ **6. Consultar novamente após alterações**

```
---------------------------------
Menu Lista de Dados
---------------------------------
Digite [1] para incluir na lista
Digite [2] para consultar a lista
Digite [3] para alterar a lista
Digite [4] para remover da lista
Digite [5] para sair
Digite sua escolha: 2
------------------------------
Os Dados adicionados foram:
1. Thayrony
```

---

#### 🔚 **7. Sair**

```
---------------------------------
Menu Lista de Dados
---------------------------------
Digite [1] para incluir na lista
Digite [2] para consultar a lista
Digite [3] para alterar a lista
Digite [4] para remover da lista
Digite [5] para sair
Digite sua escolha: 5
------------------------------
Programa encerrado.
```

---

## 📋 Resumo:

| Operação       | Função            | Descrição                         |
| -------------- | ----------------- | --------------------------------- |
| **Create (C)** | `inserirInicio()` | Adiciona um novo elemento à lista |
| **Read (R)**   | `listar()`        | Mostra todos os elementos         |
| **Update (U)** | `alterar()`       | Modifica um valor existente       |
| **Delete (D)** | `remover()`       | Remove um elemento da lista       |


---

> 💡 listas encadeadas são a base de várias estruturas mais avançadas, como pilhas, filas e árvores.
> Dominar o CRUD em C é um passo essencial para compreender **estruturas dinâmicas e ponteiros na prática**.

---
