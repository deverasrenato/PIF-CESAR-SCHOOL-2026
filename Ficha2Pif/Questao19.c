#include <stdio.h>

int main() {
    int dias_trabalhados;

    printf("Digite o numero de dias uteis trabalhados: ");
    scanf("%d", &dias_trabalhados);

    float valor_bruto = dias_trabalhados * 30.0f;
    float imposto = valor_bruto * 0.08f;
    float valor_liquido = valor_bruto - imposto;

    printf("Valor bruto: R$ %.2f\n", valor_bruto);
    printf("Imposto retido (8%%): R$ %.2f\n", imposto);
    printf("Valor liquido a receber: R$ %.2f\n", valor_liquido);

    return 0;
}
