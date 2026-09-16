#include <stdio.h>

int main() {
    float salario_base;

    printf("Digite o salario-base do funcionario: ");
    scanf("%f", &salario_base);

    /*
     * Formula: Salario Liquido = Base + (Base * 0.05) - (Base * 0.07)
     * Simplificando linearmente pelos operadores aritmeticos: Base * (1 + 0.05 - 0.07) = Base * 0.98
     */
    float gratificacao = salario_base * 0.05f;
    float imposto = salario_base * 0.07f;
    float salario_liquido = salario_base + gratificacao - imposto;

    printf("Salario-base: R$ %.2f\n", salario_base);
    printf("Gratificacao (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto (7%%): R$ %.2f\n", imposto);
    printf("Salario Liquido a receber: R$ %.2f\n", salario_liquido);

    return 0;
}
