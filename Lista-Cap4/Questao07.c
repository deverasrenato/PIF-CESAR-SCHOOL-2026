#include <stdio.h>
#include <math.h>

int main() {
    float x;

    printf("Digite um numero real: ");
    scanf("%f", &x);

    if (x >= 0) {
        printf("Raiz quadrada de %.2f = %.2f\n", x, sqrt(x));
    } else {
        printf("Quadrado de %.2f = %.2f\n", x, x * x);
    }

    return 0;
}
