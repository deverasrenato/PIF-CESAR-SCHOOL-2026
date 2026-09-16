#include <stdio.h>

int main() {
    int valor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);
    
    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n", valor, valor, valor, valor);
    return 0;
}
