#include <stdio.h>
#include <math.h>

int main() {
    double r, area, volume;
    float pi = 3.14;

    printf("Informe o raio R da esfera: ");
    scanf("%lf", &r);

    area = 4.0 * pi * pow(r, 2);
    volume = (4.0 / 3.0) * pi * pow(r, 3);

    printf("\nArea: %.3f\n", area);
    printf("Volume: %.3f\n", volume);

    return 0;
}
