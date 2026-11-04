# PARTE I: QUESTÕES TEÓRICAS E ANALÍTICAS (CONCEITOS E PRECEDÊNCIA)

---

## Questão 1

### a) `if (x = 0)` em vez de `if (x == 0)`
* `x = 0` é uma **atribuição**, não uma comparação. A variável `x` passa a valer 0 (o valor antigo é perdido) e a expressão inteira vale o valor atribuído, ou seja, **0**.
* Como 0 é "falso", o bloco do `if` **nunca é executado** (o `else`, se existir, sempre é). Além disso, `x` fica permanentemente zerado, o que costuma gerar bugs silenciosos, pois o código compila normalmente.

### b) Valores numéricos como condição
* Em C não existe tipo booleano nativo na condição: qualquer valor aritmético é aceito.
* **Falso** = valor igual a zero (`0`, `0.0`, `'\0'`, ponteiro nulo).
* **Verdadeiro** = qualquer valor **diferente de zero**, inclusive negativos e fracionários (`-5`, `0.1`).

### c) `if (x = -5)`
O bloco **será executado**. A atribuição grava `-5` em `x` e a expressão vale `-5`. Pelo padrão ANSI C, a expressão de controle do `if` é avaliada comparando-se com zero: o bloco executa se ela for **diferente de 0**. Como `-5 != 0`, a condição é verdadeira.

---

## Questão 2

### a) Saída
O programa imprime **`Opção B`**.

Apesar da indentação sugerir que o `else` pertence ao `if (x > 10)`, o compilador ignora a indentação. O `else` se associa ao `if (y > 10)`, o mais próximo. Como `x > 10` é verdadeiro e `y > 10` é falso (5 > 10), o `else` do `if` interno é executado.

### b) Regra de associação
Em C, um `else` sempre se associa ao **`if` mais próximo anterior que ainda não tenha `else`** (problema do *dangling else*), independentemente da indentação. Para mudar isso, é preciso usar chaves `{ }`.

### c) Reescrita com chaves
```c
int x = 15, y = 5;
if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```
Agora a Opção B só aparece quando `x <= 10`. Com `x = 15` e `y = 5`, nada é impresso.

---

## Questão 3

### a) Funcionamento do ternário
`situacao = (media >= 7.0) ? 'A' : 'R';`
1. Avalia a condição `media >= 7.0`.
2. Se for verdadeira, o resultado da expressão é o valor após o `?` (`'A'`).
3. Se for falsa, o resultado é o valor após o `:` (`'R'`).
4. O resultado é atribuído a `situacao`.

Com `media = 6.8`, a condição é falsa, logo `situacao = 'R'`.

### b) Com `if-else`
```c
media = (nota1 + nota2) / 2.0;
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

### c) Limitações
**Não** substitui qualquer `if-else`. O ternário é uma **expressão** que produz um valor; cada ramo deve ser uma única expressão de tipo compatível. Não comporta blocos com vários comandos, declarações de variáveis, `break`/`return`, nem ramos que só tenham efeito colateral de forma legível. Aninhar vários ternários também prejudica a legibilidade. O `if-else` é um **comando** e aceita blocos arbitrários.

---

## Questão 4

### a) Saída
```text
Prata
Ouro
```
Com `codigo = 2`, a execução entra em `case 2`, imprime `Prata` e, como não há `break`, **continua** para o `case 3`, imprimindo `Ouro`. Aí o `break` interrompe o `switch`.

### b) Papel do `break` e nome do fenômeno
O `break` encerra o `switch` e transfere o controle para o comando seguinte a ele. Sem o `break`, os `case` seguintes continuam sendo executados em sequência, o que se chama **fall-through** (queda em cascata).

### c) Tipos permitidos
O argumento do `switch` deve ser de **tipo inteiro**: `int`, `char`, `short`, `long`, `enum` (e suas variantes `unsigned`), ou uma expressão que resulte em inteiro. **Não** é permitido `float` ou `double`: os rótulos `case` precisam ser constantes inteiras, e comparar valores de ponto flutuante por igualdade exata é impreciso por causa da representação binária.

---

## Questão 5

Com `a = 0`, `b = 5`, `c = 10`:

### a) Saída
```text
a = 0, b = 5, c = 8
```
`a != 0` é falso. Como o operador é `&&`, o resultado já é falso e o lado direito **não é avaliado**, então `++b` **não é executado** e `b` continua 5. Cai no `else`: `c -= 2` e `c` vale 8.

### b) Curto-circuito
* **`&&` (E):** se o operando da esquerda é falso, o resultado é falso e o da direita **não é avaliado**.
* **`||` (OU):** se o operando da esquerda é verdadeiro, o resultado é verdadeiro e o da direita **não é avaliado**.

Isso é útil para evitar erros (por exemplo, `b != 0 && a / b > 2`), mas pode esconder efeitos colaterais, como o `++b` acima.

### c) Com `if (a == 0 || ++b > 5)`
`a == 0` é verdadeiro, então o `||` faz curto-circuito e `++b` **não é executado**. Entra no bloco do `if`: `c += 10`.

Valores finais: **`b = 5`** e **`c = 20`**.

---

## Questão 6

### a) Saída para `idade = 65`
```text
Idoso
Adulto
Jovem
```
Os três primeiros `if` são **independentes**: cada um é avaliado por conta própria. Como 65 >= 60, 65 >= 18 e 65 >= 12 são todos verdadeiros, as três mensagens são exibidas. O `else` pertence apenas ao último `if`.

### b) Diferença
* **`if` independentes:** todas as condições são testadas, e vários blocos podem executar.
* **Cadeia `else-if`:** as condições são testadas em ordem e, **na primeira verdadeira**, o bloco executa e o restante da cadeia é ignorado. No máximo um bloco é executado.

### c) Reescrita
```c
int idade = 25;
if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```
