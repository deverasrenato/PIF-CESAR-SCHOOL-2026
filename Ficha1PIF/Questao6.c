/* =========================================================================
 * Análise e Correção de Erros - Bloco de Código 3
 * -------------------------------------------------------------------------
 * ERROS IDENTIFICADOS NA VERSÃO ORIGINAL:
 * 1. Ausência das bibliotecas padrão (#include <stdio.h> e #include <stdlib.h>).
 * 2. Assinatura da função principal incompleta (faltou o tipo de retorno 'int').
 * 3. Declaração incorreta de múltiplas variáveis na mesma linha sem tipagem individual (b e c ficaram sem o 'int').
 * 4. Sintaxe incorreta na string do printf (as aspas fecharam antes dos argumentos e a variável 'd' foi incluída sem existir).
 * 5. Ausência do ponto e vírgula no final da chamada system("pause").
 * 6. Falta do comando 'return 0;' ao final da função main.
 * ========================================================================= */

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração correta de múltiplas variáveis do tipo inteiro
    int a = 1;
    int b = 2;
    int c = 3;
    
    // Exibe os valores formatados, garantindo que as variáveis estejam fora das aspas
    printf("Os numeros são: %d, %d, %d\n", a, b, c);
    
    system("pause"); // Mantém o console aberto no Windows
    
    return 0;        // Finaliza o programa com sucesso
}
