#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite o primeiro angulo: ");
    scanf("%d", &a);
    printf("Digite o segundo angulo: ");
    scanf("%d", &b);
    printf("Digite o terceiro angulo: ");
    scanf("%d", &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180) {
        printf("Erro: a soma dos angulos deve ser 180 e todos devem ser positivos.\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Triangulo Retangulo.\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Triangulo Obtusangulo.\n");
    } else {
        printf("Triangulo Acutangulo.\n");
    }

    return 0;
}
