#include <stdio.h>

int main() {
    int d;
    printf("Digite os dias trabalhados: ");
    scanf("%d", &d);

    double sb = d * 45.0;
    double g = sb * 0.05;
    double i = sb * 0.08;
    double sl = sb + g - i;

    printf("Dias: %d | Bruto: R$ %.2f | Grat: R$ %.2f | Imp: R$ %.2f | Liquido: R$ %.2f\n", d, sb, g, i, sl);

    return 0;
}
