QUESTAO 7
Primeiro print:
"
Bom Dia Shirley."
Segundo print:
"Você já tomou café?
"
Terceiro print:
"

A solução não existe!
Não Insista."
Quarto print:
"Duas Linhas De Saída
Ou uma?"
Quinto print:
"um
dois
três"

---

Questão 9

* O especificador %c trata tudo o que recebe como um caractere individual.
* A sequência \n promove a quebra de linha em vez de processar a letra N.
* A sequência \t executa a tabulação horizontal no lugar da letra T.
* A sequência " indica a impressão literal das aspas sem encerrar a string.
* Saída esperada no terminal: "Primeiro programa
Pressione qualquer tecla para continuar. . .
* Na linha printf("%c", """); pode ocorrer um aviso do compilador devido à tipagem mista entre caractere e string.

---

Questão 10
b) Verdadeiro (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).
Justificativa: A linguagem é sensível ao formato das letras, tratando identificadores como Numero, numero e NUMERO como variáveis totalmente independentes na memória.

---

Questão 11
\r — constante de caractere de escape — char
2130 — constante inteira decimal — int
-123 — constante inteira decimal — int
33.28 — constante de ponto flutuante — double
0XFA — constante hexadecimal inteira — int
0101 — constante inteira octal — int
2.0e30 — constante de ponto flutuante em notação científica — double
\xDC — caractere de escape em hexadecimal — char
'"' — constante de caractere de escape — char
'\' — constante de caractere de escape — char
'F' — constante de caractere simples — char
0 — constante de número inteiro — int
'\0' — constante de caractere nulo — char
"F" — cadeia de caracteres — char [] ou char *
-4567.89 — constante de ponto flutuante negativa — double

---

Questão 12
a) int a; [ Correto ] [ Declaração de variável inteira ]
b) float b; [ Correto ] [ Declaração de variável de ponto flutuante ]
c) double float c; [ Incorreto ] [ Os tipos double e float não podem ser combinados em uma única declaração ]
d) unsigned char d; [ Correto ] [ Declaração de caractere sem sinal ]
e) unsigned e; [ Correto ] [ O compilador assume o tipo inteiro por padrão ]
f) long float f; [ Incorreto ] [ O termo correto é long double no padrão atual ]
g) long g; [ Correto ] [ O compilador assume o tipo long int ]
h) long double h; [ Correto ] [ Declaração de ponto flutuante de precisão estendida ]

---

Questão 13
c) São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos.

---

Questão 14
a) Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte.

---

Questão 15
c) Uma diretiva especial para o pré-processador C, executada antes da compilação.

---

Questão 16
c) Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita).

---

Questão 17
a) printf ( "Primeiro programa" );
b) printf( "Primeiro programa" );
c) printf("Primeiro programa");
Essas variações demonstram que a sintaxe aceita espaçamentos adicionais sem comprometer a leitura ou a compilação das instruções.
