#include <stdio.h>

int main() {
    int n, divisores = 0;
    printf("Digite N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) divisores++;
    }

    if (divisores == 2) {
        printf("%d eh primo. Total de divisores: %d\n", n, divisores);
    } else {
        printf("%d NAO eh primo. Total de divisores: %d\n", n, divisores);
    }
    return 0;
}
