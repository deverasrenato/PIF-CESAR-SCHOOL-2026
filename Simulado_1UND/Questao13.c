#include <stdio.h>

int main() {
    int n, i;
    int fat = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Valor invalido! Nao existe fatorial de numero negativo.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fat = fat * i;
        }
        printf("Fatorial de %d = %d\n", n, fat);
    }

    return 0;
}
