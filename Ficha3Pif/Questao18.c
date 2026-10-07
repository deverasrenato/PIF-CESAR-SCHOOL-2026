#include <stdio.h>

int main() {
    int num, invertido = 0;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0) {
        invertido = (invertido * 10) + (temp % 10);
        temp /= 10;
    }

    printf("Numero invertido: %d\n", invertido);
    return 0;
}
