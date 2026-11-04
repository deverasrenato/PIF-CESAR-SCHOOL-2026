#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("O numero e PAR.\n");
    } else {
        printf("O numero e IMPAR.\n");
    }

    if (n > 0) {
        printf("O numero e POSITIVO.\n");
    } else if (n < 0) {
        printf("O numero e NEGATIVO.\n");
    } else {
        printf("O numero e ZERO.\n");
    }

    return 0;
}
