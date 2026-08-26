/* =========================================================================
 * Análise e Explicação de Código - Caracteres de Escape e Formatação
 * -------------------------------------------------------------------------
 * O código cumpre corretamente o seu propósito de demonstrar o uso de 
 * sequências de escape (caracteres especiais) dentro de uma string no printf.
 * 
 * COMPORTAMENTO DA EXECUÇÃO:
 * 1. A sequência '\n' insere uma quebra de linha antes de exibir o texto.
 * 2. A sequência '\t' adiciona um espaçamento horizontal equivalente a uma tabulação (tab).
 * 3. As barras invertidas antes das aspas ('\"') permitem que as aspas apareçam 
 *    literalmente no texto impresso.
 * 4. A função system("PAUSE") suspende a execução e exibe a mensagem padrão 
 *    do sistema operacional no console.
 * ========================================================================= */

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Imprime o texto formatado com quebra de linha, tabulação e aspas visíveis
    printf("\n\t\"Primeiro programa\"");
    
    system("PAUSE"); // Pausa a execução aguardando uma tecla do usuário
    
    return 0;        // Encerra o programa com sucesso
}
