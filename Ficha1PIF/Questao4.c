/* =========================================================================
 * Questão 4 - Análise e Correção de Erros de Sintaxe
 * -------------------------------------------------------------------------
 * ERROS IDENTIFICADOS NA VERSÃO ORIGINAL:
 * 1. Inclusão incorreta de ponto e vírgula após o include <stdlib.h>;
 * 2. Uso incorreto de sintaxe na função principal ("Main{}" e parênteses errados);
 * 3. Ausência de aspas duplas na string do printf e uso de variável não declarada;
 * 4. Mistura incorreta com sintaxe de C++ (cout << endl);
 * 5. Delimitadores de bloco incorretos no fechamento da função (usando ')' em vez de '}').
 * ========================================================================= */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int Semanas = 52; // Declaração da variável para armazenar o número de semanas no ano
    
    // Exibe o resultado formatado no console substituindo %d pelo valor da variável
    printf("Existem %d semanas no ano.", Semanas);
    
    // Mantém o console aberto no Windows antes de encerrar a execução
    system("PAUSE"); 
    
    return 0; // Finaliza o programa indicando execução bem-sucedida
}
