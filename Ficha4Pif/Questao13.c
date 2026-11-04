#include <stdio.h>
#include <math.h>

int main() {
    char operacao;
    float a, b;

    printf("Operacoes: + (soma), - (subtracao), * (multiplicacao), / (divisao), ^ (potencia)\n");
    printf("Escolha a operacao: ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro operando: ");
    scanf("%f", &a);
    printf("Digite o segundo operando: ");
    scanf("%f", &b);

    switch (operacao) {
        case '+':
            printf("Resultado: %.2f\n", a + b);
            break;
        case '-':
            printf("Resultado: %.2f\n", a - b);
            break;
        case '*':
            printf("Resultado: %.2f\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Erro: divisao por zero.\n");
            } else {
                printf("Resultado: %.2f\n", a / b);
            }
            break;
        case '^':
            printf("Resultado: %.2f\n", pow(a, b));
            break;
        default:
            printf("Erro: operacao invalida.\n");
    }

    return 0;
}
