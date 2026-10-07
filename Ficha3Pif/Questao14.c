#include <stdio.h>

int main() {
    long long int soma = 0;
    for (int i = 1; i <= 100; i++) {
        int q = i * i;
        printf("%d -> %d\n", i, q);
        soma += q;
    }
    printf("Soma total dos quadrados: %lld\n", soma);
    return 0;
}
