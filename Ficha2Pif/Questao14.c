#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Digite os tres lados do triangulo (Os três de uma vez, separados por um espaço.): ");
    scanf("%f %f %f", &a, &b, &c);

    float p = (a + b + c) / 2.0f;
    float area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Area do triangulo (Formula de Heron): %.2f\n", area);

    return 0;
}
