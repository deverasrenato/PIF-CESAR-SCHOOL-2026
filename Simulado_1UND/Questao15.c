#include <stdio.h>

int main() {
    int n, i, j;
    int num = 1;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &n);

    printf("\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d\t", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
