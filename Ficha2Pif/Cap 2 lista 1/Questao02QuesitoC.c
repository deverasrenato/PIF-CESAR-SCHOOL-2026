c) 
#include <stdio.h>

int main() {
    char ch;
    // O espaco antes de %c instrui o scanf a ignorar espacos, tabulacoes e quebras de linha ('\n') no buffer
    scanf(" %c", &ch);
    return 0;
}
