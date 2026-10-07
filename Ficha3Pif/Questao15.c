#include <stdio.h>

int main() {
    int num, achou = 0;
    printf("Digite o limite num: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            achou = 1;
        }
    }

    if (!achou) {
        printf("Nenhum numero satisfaz a condicao.");
    }
    printf("\n");
    return 0;
}
