/* =========================================================================
 * Desenho de Caixa com Caracteres Especiais (Tabela ASCII / Code Page 437)
 * -------------------------------------------------------------------------
 * Este programa utiliza códigos hexadecimais correspondentes à tabela 
 * estendida do DOS para desenhar as bordas de uma caixa geométrica no console.
 * ========================================================================= */

#include <stdio.h>

int main() {
    // Declaração dos caracteres de borda (formato compacto e limpo)
    char cantoSupEsq = '\xC9'; // ╔
    char cantoSupDir = '\xBB'; // ╗
    char cantoInfEsq = '\xC8'; // ╚
    char cantoInfDir = '\xBC'; // ╝
    char hLine       = '\xCD'; // ═ (Linha Horizontal)
    char vLine       = '\xBA'; // ║ (Linha Vertical)
    
    // Construção visual da caixa no console
    printf("%c%c%c%c\n", cantoSupEsq, hLine, hLine, cantoSupDir);
    printf("%c    %c\n", vLine, vLine);
    printf("%c    %c\n", vLine, vLine);
    printf("%c%c%c%c\n", cantoInfEsq, hLine, hLine, cantoInfDir);

    return 0; // Finaliza o programa com sucesso
}
