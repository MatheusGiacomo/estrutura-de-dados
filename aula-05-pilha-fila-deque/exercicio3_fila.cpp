// ============================================================
// Exercicio 3 - Fila
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// Na fila os dados entram por uma ponta e saem pela outra,
// entao sao necessarios dois indices.
//
// Saida esperada:
// 10 20 30
//
// ============================================================

#include <iostream>
using namespace std;

#define TAMANHO 100

struct Fila {
    int itens[TAMANHO];
    int inicio;   // quem e o proximo a sair
    int fim;      // proxima posicao livre
};

// ------------------------------------------------------------
// PASSO 1
// Complete a funcao enqueue, que insere no fim da fila.
// ------------------------------------------------------------

void enqueue(Fila& fila, int valor) {
    fila.itens[fila.fim] = valor;
    fila.fim = fila.fim + 1;
}

// ------------------------------------------------------------
// PASSO 2
// Complete a funcao dequeue, que retira do inicio da fila.
// ------------------------------------------------------------

void dequeue(Fila& fila) {
    fila.inicio = fila.inicio + 1;
}

// ------------------------------------------------------------
// PASSO 3
// Complete a funcao front, que devolve o primeiro valor da fila
// sem remover.
// ------------------------------------------------------------

int front(Fila& fila) {
    return fila.itens[fila.inicio];
}

// ------------------------------------------------------------
// PASSO 4
// Complete a funcao isEmpty.
// ------------------------------------------------------------

bool isEmpty(Fila& fila) {
    return fila.inicio == fila.fim;
}

int main() {

    Fila fila;

    // --------------------------------------------------------
    // PASSO 5
    // Comece com inicio e fim valendo zero.
    // --------------------------------------------------------

    fila.inicio = 0;
    fila.fim = 0;

    // --------------------------------------------------------
    // PASSO 6
    // Enfileire os valores 10, 20 e 30, nessa ordem.
    // --------------------------------------------------------

    enqueue(fila, 10);
    enqueue(fila, 20);
    enqueue(fila, 30);

    // --------------------------------------------------------
    // PASSO 7
    // Atenda todos, imprimindo cada valor seguido de um espaco.
    // --------------------------------------------------------

    while (!isEmpty(fila)) {
        cout << front(fila) << " ";
        dequeue(fila);
    }

    cout << endl;
    return 0;
}
