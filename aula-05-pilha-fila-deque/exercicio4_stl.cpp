
// ============================================================
// Exercicio 4 - As mesmas estruturas com a STL
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// Tudo que voce escreveu nos exercicios 2 e 3 ja existe pronto
// no C++, com quase os mesmos nomes.
//
// Saida esperada:
// 30 20 10
// 10 20 30
//
// ============================================================

#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {

    // --------------------------------------------------------
    // PASSO 1
    // Declare uma pilha de inteiros e empilhe 10, 20 e 30.
    // --------------------------------------------------------

    stack<int> pilha;
    pilha.push(10);
    pilha.push(20);
    pilha.push(30);

    // --------------------------------------------------------
    // PASSO 2
    // Esvazie a pilha imprimindo cada valor.
    // --------------------------------------------------------

    while (!pilha.empty()) {
        cout << pilha.top() << " ";
        pilha.pop();
    }

    cout << endl;

    // --------------------------------------------------------
    // PASSO 3
    // Declare uma fila de inteiros e enfileire 10, 20 e 30.
    // --------------------------------------------------------

    queue<int> fila;
    fila.push(10);
    fila.push(20);
    fila.push(30);

    // --------------------------------------------------------
    // PASSO 4
    // Esvazie a fila imprimindo cada valor.
    // Para ler o primeiro, use front.
    // --------------------------------------------------------

    while (!fila.empty()) {
        cout << fila.front() << " ";
        fila.pop();
    }

    cout << endl;
    return 0;
}
