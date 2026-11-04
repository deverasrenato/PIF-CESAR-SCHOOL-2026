#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Erro: a nao pode ser zero.\n");
    } else {
        float delta = b * b - 4 * a * c;

        printf("Delta = %.2f\n", delta);

        if (delta < 0) {
            printf("A equacao nao possui raizes reais.\n");
        } else if (delta == 0) {
            printf("Raiz unica: x = %.2f\n", -b / (2 * a));
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Raizes reais distintas: x1 = %.2f e x2 = %.2f\n", x1, x2);
        }
    }

    return 0;
}
