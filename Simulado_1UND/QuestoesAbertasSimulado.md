# Lista de Exercícios: Programação em Linguagem C

## Questão 01. Sensibilidade a Caixa (Case Sensitivity) e Identificadores em C (Cap. 1)

A linguagem C diferencia rigorosamente letras maiúsculas e minúsculas na formação de nomes de identificadores e palavras-chave. Com base nessa premissa, analise os pares de identificadores abaixo e assinale a alternativa correta:

a) Os nomes de variáveis 'numero' e 'Numero' referenciam o mesmo endereço de memória.  
b) A palavra-chave 'Main' com 'M' maiúsculo é reconhecida pelo compilador como ponto de entrada válido.  
c) Todos os pares de nomes ('valor'/'VALOR', 'peso'/'Peso', 'taxa'/'TAXA') representam identificadores totalmente distintos para o compilador.  
d) A sensibilidade a caixa baixa/alta depende exclusivamente do sistema operacional utilizado na compilação.  

**Resposta Correta:** **C**

*Justificativa:* Como a linguagem C é sensível ao contexto de caixa (case-sensitive), qualquer variação entre letras maiúsculas e minúsculas faz com que o compilador interprete os nomes como identificadores inteiramente diferentes.

---

## Questão 02. Especificadores de Formato, Sequências de Escape e Erros de Compilação (Cap. 1)

Um estudante iniciante escreveu o código C abaixo tentando imprimir mensagens formatadas com quebras de linha e tabulações, mas enfrentou erros de compilação. Identifique os erros sintáticos/estruturais presentes no código:

```c
#include <stdio.h>

#nclude <stdlib.h>; 
int Main() 
{

int idade = 20;

printf( A idade do aluno eh: %d anos.. , idade); 
Cesar School | Programação Imperativa e Funcional | Página 2
cout << endl; 
system("PAUSE");

return 0;

}
```

**Principais Erros Sintáticos e Estruturais Identificados:**

1. **Erros na inclusão de biblioteca e uso de ponto e vírgula:** Na linha `#nclude <stdlib.h>;`, a diretiva de pré-processador está grafada incorretamente (falta a letra `i` em `include`) e não deve conter ponto e vírgula ao final.
2. **Identificador da função principal:** A função de entrada foi declarada como `Main()`. Em C, a função principal deve ser obrigatoriamente grafada em minúsculas: `main()`.
3. **Ausência de aspas na string de formato:** No comando `printf`, o texto base não está delimitado por aspas duplas (`" A idade do aluno eh: %d anos.. "`).
4. **Instruções inválidas e fora de sintaxe C:**
   * O texto do cabeçalho do documento (`Cesar School | Programação...`) está solto no código sem marcação de comentário (`//` ou `/* ... */`).
   * O comando `cout << endl;` pertence à linguagem C++ e não é aceito pela sintaxe padrão do C.

---

## Questão 03. Operadores de Atribuição Composta e Avaliação Sequencial (Cap. 2)

Os operadores de atribuição em C executam suas ações da direita para a esquerda e podem ser combinados com operadores aritméticos. Determine os valores finais de a, b, c e d após a execução da sequência abaixo:

```c
int a = 2, b = 4, c = 5, d = 10;
a += b + c; 
b *= c = d - 2; 
d %= a + 3; 
a += b += c += 5; 
```

**Passo a Passo da Resolução:**

1. `a += b + c;`  
   * $a = 2 + (4 + 5) \implies a = 11$.

2. `b *= c = d - 2;`  
   * Avalia a direita primeiro: $c = 10 - 2 \implies c = 8$.
   * Em seguida: $b = b \times c \implies b = 4 \times 8 \implies b = 32$.

3. `d %= a + 3;`  
   * $d = 10 \pmod{11 + 3} \implies d = 10 \pmod{14} \implies d = 10$.

4. `a += b += c += 5;`  
   * Avalia da direita para a esquerda:
   * $c = c + 5 \implies c = 8 + 5 \implies c = 13$.
   * $b = b + c \implies b = 32 + 13 \implies b = 45$.
   * $a = a + b \implies a = 11 + 45 \implies a = 56$.

**Valores Finais:**  
* **a = 56**
* **b = 45**
* **c = 13**
* **d = 10**

---

## Questão 04. Avaliação de Expressões Lógicas, Relacionais e Precedência (Cap. 2)

Considere as variáveis inteiras `i = 2`, `j = 3`, `k = 0` e as variáveis de ponto flutuante `x = 2.5`, `y = 5.0`. Avalie cada expressão abaixo e determine seu resultado lógico em C (1 para Verdadeiro, 0 para Falso):

a) `i < j + 2`  
* Avaliação: $2 < (3 + 2) \implies 2 < 5$ (Verdadeiro)  
* **Resultado:** **1**

b) `2 * i - 5 <= j - 4`  
* Avaliação: $(2 \times 2) - 5 \le 3 - 4 \implies 4 - 5 \le -1 \implies -1 \le -1$ (Verdadeiro)  
* **Resultado:** **1**

c) `!k && (x + y >= 7.5)`  
* Avaliação: `!0` é $1$. $(2.5 + 5.0 \ge 7.5) \implies 7.5 \ge 7.5$ (Verdadeiro). $1 \land 1 \implies 1$  
* **Resultado:** **1**

d) `!(i == j) || (y / x == 2.0)`  
* Avaliação: `!(2 == 3)` é `!0` $\implies 1$. Devido ao operador curto-circuito `||`, a expressão já resulta em Verdadeiro.  
* **Resultado:** **1**

e) `i == 2 && j == 4 || k == 0`  
* Avaliação: $(2 == 2 \land 3 == 4) \lor (0 == 0) \implies (1 \land 0) \lor 1 \implies 0 \lor 1 \implies 1$  
* **Resultado:** **1**

---

## Questão 05. Estruturas de Repetição: Comparação entre for, while e do-while (Cap. 3)

As estruturas de repetição permitem a execução iterativa de instruções em C. Analise as características de `for`, `while` e `do-while` e responda fundamentadamente:

a) **Qual é a diferença essencial entre while e do-while em relação ao número mínimo de execuções do bloco de código e ao momento do teste condicional?**  
No laço `while`, o teste condicional é realizado **antes** de executar o bloco de instruções, garantindo que o bloco possa ser executado $0$ vezes caso a condição seja falsa no início. No laço `do-while`, o teste condicional ocorre **após** a execução do bloco de instruções, o que garante que o código dentro do laço seja executado ao menos $1$ vez, independentemente da condição.

b) **Em que cenários o laço for se apresenta como a escolha mais elegante e legível frente ao laço while?**  
O laço `for` é mais indicado quando se conhece previamente o número de iterações ou quando há uma estrutura clara de inicialização, condição de parada e incremento/decremento da variável de controle reunidas no cabeçalho do laço.

c) **O trecho de código 'while (condicao);' (com ponto-e-vírgula ao final do cabeçalho) constitui um erro de compilação ou de lógica? O que acontece se condicao for verdadeira?**  
Não constitui erro de compilação, pois o ponto e vírgula representa uma instrução nula em C. O problema trata-se de um erro de lógica. Se a variável `condicao` for verdadeira (diferente de zero), o programa entrará em um laço infinito, executando repetidamente a instrução vazia sem atualizar o estado da variável de teste.

---

## Questão 06. Escopo de Bloco e Comandos de Desvio (break e continue) (Cap. 3)

Analise o programa abaixo que calcula a soma acumulada de quadrados dentro de um laço `for` contendo um comando de desvio e controle de escopo interno:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;

        int soma = 0;
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");

    return 0;
}
```

a) **Por que o compilador emitirá um erro de compilação na instrução printf final?**  
A variável `soma` foi declarada no escopo interno do laço `for`. Por ter escopo local restrito àquele bloco de código, ela deixa de existir assim que a execução do laço termina. O `printf` tenta acessar um identificador que não é visível fora das chaves do `for`. Além disso, a reinicialização da variável com `0` a cada iteração impediria o acúmulo da soma.

b) **Quais iterações do laço serão efetivamente executadas e qual o impacto dos comandos continue e break no fluxo?**  
* Para $i = 1, 2, 3, 4$: O bloco executa a operação normalmente.
* Para $i = 5$: O comando `continue` ignora as instruções restantes do corpo do laço e avança imediatamente para o incremento do contador ($i++$).
* Para $i = 6, 7$: O bloco volta a executar a operação normalmente.
* Para $i = 8$: O comando `break` interrompe a execução do laço imediatamente, saltando para fora da estrutura de repetição.

As iterações processadas no cálculo são referentes aos valores de $i = 1, 2, 3, 4, 6, 7$.

c) **Código corrigido com o escopo ajustado e saída no console:**

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++) {  
        if (i == 5) continue;  
        if (i == 8) break;  
        soma += i * i;  
    }  

    printf("Soma final = %d\n", soma);  
    return 0;  
}
```

**Cálculo da Soma Impressa:**  
$1^2 + 2^2 + 3^2 + 4^2 + 6^2 + 7^2 = 1 + 4 + 9 + 16 + 36 + 49 = 115$

**Saída impressa no console:**
```text
Soma final = 115
```