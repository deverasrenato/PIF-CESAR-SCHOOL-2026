#include <stdio.h>

int main() {
    int n;
    printf("Digite o termo N: ");
    scanf("%d", &n);

    if (n <= 0) return 0;

    long long t1 = 1, t2 = 1, proximo;
    printf("Termos: ");
    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            printf("1 ");
        } else {
            proximo = t1 + t2;
            printf("%lld ", proximo);
            t1 = t2;
            t2 = proximo;
        }
    }
    printf("\nN-esimo termo (%d): %lld\n", n, t2);
    return 0;
}
