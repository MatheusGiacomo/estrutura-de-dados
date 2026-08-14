# Aula 03 - Lista Encadeada

Exercícios da aula de 14 de agosto de 2026.

Cada arquivo tem o código inicial com os passos comentados. Siga os comentários
na ordem em que aparecem e escreva o código onde está indicado.

## Exercícios

| Arquivo | O que fazer | Saída esperada |
|---|---|---|
| `exercicio1_no.cpp` | Declarar a struct `No` e criar um nó | `10` |
| `exercicio2_encadeamento.cpp` | Criar três nós, ligá-los e percorrer | `10 20 30` |
| `exercicio3_duplamente.cpp` | Acrescentar o campo `anterior` e percorrer de trás para frente | `30 20 10` |
| `exercicio4_circular.cpp` | Fechar o ciclo e dar uma volta completa | `10 20 30` |

Faça na ordem. Cada exercício reaproveita o que foi construído no anterior.

## Como compilar e executar

Dentro da pasta da aula:

```bash
g++ exercicio1_no.cpp -o exercicio1
./exercicio1
```

Trocando o nome do arquivo para cada exercício.

No Windows, o executável recebe a extensão `.exe`:

```bash
g++ exercicio1_no.cpp -o exercicio1.exe
exercicio1.exe
```

## Se travar

Alguns pontos que costumam gerar dúvida:

O ponto e vírgula depois da chave que fecha a `struct` é obrigatório.

Quando a variável é um nó comum, o acesso ao campo usa ponto, como em
`primeiro.valor`. Quando é um ponteiro para nó, usa seta, como em
`primeiro->valor`.

Um campo `proximo` que ainda não aponta para ninguém deve receber `nullptr`.

No exercício 4, testar `atual != nullptr` não funciona, porque nenhum nó da
lista circular aponta para `nullptr`.

## Resolução

As resoluções ficam na branch `gabarito`, liberada após a aula.

```bash
git fetch origin
git checkout gabarito
```
