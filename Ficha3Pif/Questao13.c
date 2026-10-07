#include <stdio.h>

int main() {
    int n;
    long long int fat = 1;

    printf("Digite N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: Numero negativo.\n");
    } else {
        for (int i = 1; i <= n; i++) fat *= i;
        printf("%d! = %lld\n", n, fat);
    }
    return 0;
}
