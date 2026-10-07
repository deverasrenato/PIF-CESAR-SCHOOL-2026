# PARTE I: QUESTÕES TEÓRICAS E ANALÍTICAS (CONCEITOS E PRECEDÊNCIA)

---

## Questão 1

### a) Diferença essencial entre `while` e `do-while`
* **Momento de verificação:** A estrutura `while` realiza o teste da condição lógica no início (pré-testada), antes de executar o bloco de código. Em contrapartida, o `do-while` avalia a expressão ao final do bloco (pós-testada).
* **Mínimo de execuções:**
  * `while`: Pode rodar **0 vezes**, caso a condição seja falsa já na entrada.
  * `do-while`: Garante no mínimo **1 execução**, pois a instrução é rodada antes do primeiro teste.

### b) Casos de uso ideais
* **`for`:** Indicado quando o limite de iterações é conhecido previamente ou gerenciado por uma contagem com passo definido (ex.: percorrer um *array* de tamanho $N$).
* **`while`:** Recomendado para repetidores onde o critério de parada depende de uma condição indeterminada, devendo testar o estado antes da execução (ex.: leitura contínua até encontrar fim de arquivo/EOF).
* **`do-while`:** Perfeito para cenários em que o bloco precisa rodar ao menos uma vez antes de checar a validação (ex.: exibição de menu principal e validação de *input* do usuário).

### c) Análise do trecho `while (condicao);`
Isso configura um **erro de lógica** (semântico), mas não um erro de compilação.
* O ponto e vírgula `;` representa uma instrução nula em C, atuando como o corpo do laço.
* **Comportamento:** Se `condicao` for verdadeira, o programa entrará em um laço infinito preso àquela linha. Como não há código dentro do corpo para alterar o estado da variável testada, a verificação continuará sendo sempre verdadeira, travando o fluxo da aplicação.

---

## Questão 2

### a) Falha de compilação no `printf` final
Ocorre um erro de escopo no qual o compilador sinaliza que a variável `soma` não foi declarada (`'soma' undeclared`). Como a declaração da variável foi feita internamente ao bloco do laço `for`, seu tempo de vida e visibilidade ficam restritos às chaves `{}` daquele trecho.

### b) Problema conceitual ao mover o `printf` para dentro do laço
Se a declaração e inicialização `int soma = 0;` ocorrerem dentro da estrutura do `for`, a variável será reiniciada com zero a cada iteração.
Consequentemente, a instrução `soma += i * i;` calculará somente o valor do elemento individual do ciclo atual, perdendo o valor acumulado das iterações anteriores (imprimindo $1, 4, 9, \dots$ de forma isolada, em vez do total somado).

### c) Correção do código
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0; // Declarada e inicializada no escopo do main

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```

---

## Questão 3

### A) Sequência de saída
A sequência gerada será: `36 18 9 4 2 1`

### B) Análise do Trecho B
* **Ação de `ch + 1`:** Executa um cálculo aritmético básico com o valor da tabela ASCII do caractere lido, exibindo o símbolo imediatamente subsequente na ordem alfabética/numérica (ex.: digita-se `'A'`, imprime-se `'B'`).
* **Uso dos parênteses em `(ch = getch())`:** O operador de desigualdade relacional `!=` possui prioridade (precedência) sobre o operador de atribuição `=`. Sem o parêntese delimitador, a linguagem avaliaria primeiro `getch() != 'X'`, obtendo um resultado booleano (`1` ou `0`), e gravaria esse valor na variável `ch`, destruindo o caractere original lido.

### C) Saída de laço infinito
Para romper um laço indeterminado como `for (;;)` de forma limpa sem encerrar a aplicação no sistema operacional, deve-se aplicar o comando `break;` dentro de uma estrutura condicional de verificação (*guard clause*).

---

## Questão 4

### a) Comportamento do `break`
Interrompe e encerra imediatamente a execução do laço (`for`, `while` ou `do-while`), apontando o fluxo de execução para a instrução subsequente ao bloco do laço.

### b) Comportamento do `continue` no laço `for`
Cancela o restante da iteração corrente, ignorando as linhas do bloco posicionadas após a chamada do comando, e salta diretamente para a etapa de incremento/atualização do cabeçalho do `for`. Logo após, reavalia a condição do laço para decidir se faz o próximo ciclo.

### c) Atuação em laços aninhados
A instrução `break` afeta unicamente o laço mais interno em que está contida (o nível de aninhamento local), permitindo que o laço externo continue rodando suas iterações normalmente.

---

## Questão 5

### a) Quantidade de iterações
O laço executará **5 iterações**.

### b) Rastreamento dos valores
```text
i = 0, j = 10 | soma = 10
i = 1, j = 9  | soma = 10
i = 2, j = 8  | soma = 10
i = 3, j = 7  | soma = 10
i = 4, j = 6  | soma = 10
```

### c) Equivalente com laço `while`
```c
int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```

---

## Questão 6

### A) Valor final de `x`
O valor final impresso para `x` é **6**.

### B) Teste de mesa detalhado
1. **Início ($x = 0$):** Valida $0 < 5$ (Verdadeiro). Pela operação pós-fixada no teste, $x$ incrementa para 1 e executa o corpo nulo.
2. **Ciclo 2 ($x = 1$):** Valida $1 < 5$ (Verdadeiro). O valor de $x$ sobe para 2. Executa o corpo nulo.
3. **Ciclo 3 ($x = 2$):** Valida $2 < 5$ (Verdadeiro). O valor de $x$ sobe para 3. Executa o corpo nulo.
4. **Ciclo 4 ($x = 3$):** Valida $3 < 5$ (Verdadeiro). O valor de $x$ sobe para 4. Executa o corpo nulo.
5. **Ciclo 5 ($x = 4$):** Valida $4 < 5$ (Verdadeiro). O valor de $x$ sobe para 5. Executa o corpo nulo.
6. **Encerramento ($x = 5$):** Avalia $5 < 5$ (Falso). O laço encerra, mas a avaliação da expressão realiza o efeito colateral do incremento, alterando $x$ para 6. O laço é finalizado e o `printf` mostra **6**.

### c) Reescrita sem efeito colateral no teste
```c
int x = 0;
while (x < 5) {
    x++;
}
x++; // Incremento adicional para emular o passo final do teste mal-sucedido
printf("Valor final de x = %d\n", x);
```