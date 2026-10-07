
#include <stdio.h>

void versao_for() {
    for (int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void versao_while() {
    int i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

void versao_do_while() {
    int i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");
}

int main() {
    versao_for();
    versao_while();
    versao_do_while();
    return 0;
}
