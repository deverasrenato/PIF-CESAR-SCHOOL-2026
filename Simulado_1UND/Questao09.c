#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, p, area;

    printf("Informe os lados A, B e C: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Area calculada: %.3f\n", area);

    return 0;
}
