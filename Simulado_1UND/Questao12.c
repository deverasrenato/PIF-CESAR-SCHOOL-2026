#include <stdio.h>

int main() {
    float n;

    do {
        printf("Informe uma nota de 0 a 10: ");
        scanf("%f", &n);

        if (n < 0 || n > 10) {
            printf("Valor incorreto. Tente de novo!\n");
        }
    } while (n < 0 || n > 10);

    printf("Nota cadastrada: %.1f\n", n);

    return 0;
}
