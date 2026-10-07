#include <stdio.h>

int main() {
    int a, b, soma_primos = 0;
    printf("Digite A e B (A < B): ");
    scanf("%d %d", &a, &b);

    printf("Primos encontrados: ");
    for (int i = a; i <= b; i++) {
        if (i <= 1) continue;
        int divisores = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) divisores++;
        }
        if (divisores == 2) {
            printf("%d ", i);
            soma_primos += i;
        }
    }
    printf("\nSoma total dos primos: %d\n", soma_primos);
    return 0;
}
