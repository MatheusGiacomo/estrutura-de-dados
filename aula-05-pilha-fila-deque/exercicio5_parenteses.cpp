// ============================================================
// Exercicio 5 - Verificador de parenteses
// Estrutura de Dados - IFSP Campus Campos do Jordao
// ============================================================
//
// Um compilador precisa saber se os parenteses de uma expressao
// estao corretamente fechados.
//
// O ultimo parentese aberto e o primeiro que precisa ser
// fechado. Essa e exatamente a regra da pilha.
//
// Saida esperada:
// ( a + b ) * ( c - d ) -> correto
// ( a + b * ( c - d ) -> incorreto
//
// ============================================================

#include <iostream>
#include <stack>
#include <string>
using namespace std;

// ------------------------------------------------------------
// PASSO 1
// Complete a funcao verificar.
//
// Ela recebe uma string e devolve true se os parenteses
// estiverem corretamente fechados.
// ------------------------------------------------------------

bool verificar(string expressao) {
    stack<char> pilha;

    for (char c : expressao) {
        if (c == '(') {
            pilha.push(c);
        } else if (c == ')') {
            if (pilha.empty()) {
                return false; // apareceu um fechamento sem abertura
            } else {
                pilha.pop(); // encontrou o par correspondente
            }
        }
    }

    // Se a pilha estiver vazia, todos foram fechados corretamente
    return pilha.empty();
}

int main() {

    string correta = "( a + b ) * ( c - d )";
    string incorreta = "( a + b * ( c - d )";

    // --------------------------------------------------------
    // PASSO 2
    // Chame verificar para cada expressao e imprima o resultado
    // no formato da saida esperada.
    // --------------------------------------------------------

    cout << correta << " -> " << (verificar(correta) ? "correto" : "incorreto") << endl;
    cout << incorreta << " -> " << (verificar(incorreta) ? "correto" : "incorreto") << endl;

    return 0;
}
