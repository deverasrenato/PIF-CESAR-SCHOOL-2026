#include <stdio.h>
#include <math.h>

int main() {
    float altura_degrau_cm, altura_total_m;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &altura_degrau_cm);
    printf("Digite a altura total a ser alcancada (em metros): ");
    scanf("%f", &altura_total_m);

    float altura_total_cm = altura_total_m * 100.0f;
    float quantidade_degraus = ceil(altura_total_cm / altura_degrau_cm);

    printf("Quantidade minima de degraus: %.0f\n", quantidade_degraus);

    return 0;
}
