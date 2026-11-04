#include <stdio.h>

int main() {
    int a, b, c, aux;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }
    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    printf("Ordem crescente: %d %d %d\n", a, b, c);

    return 0;
}
