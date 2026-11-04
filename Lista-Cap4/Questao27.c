#include <stdio.h>

int main() {
    int horas;
    float valor;

    printf("Digite o numero de horas de permanencia: ");
    scanf("%d", &horas);

    if (horas < 0) {
        printf("Erro: numero de horas invalido.\n");
        return 0;
    }

    if (horas <= 2) {
        valor = horas * 2.00f;
    } else if (horas <= 4) {
        valor = 2 * 2.00f + (horas - 2) * 2.50f;
    } else {
        valor = 2 * 2.00f + 2 * 2.50f + (horas - 4) * 3.00f;
    }

    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor cobrado: R$ %.2f\n", valor);

    return 0;
}
