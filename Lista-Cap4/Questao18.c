#include <stdio.h>

int main() {
    int opcao;
    float temperatura;

    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f F\n", temperatura * 1.8f + 32);
            break;
        case 2:
            printf("Resultado: %.2f K\n", temperatura + 273.15f);
            break;
        case 3:
            printf("Resultado: %.2f C\n", (temperatura - 32) / 1.8f);
            break;
        case 4:
            printf("Resultado: %.2f C\n", temperatura - 273.15f);
            break;
        default:
            printf("Erro: opcao invalida.\n");
    }

    return 0;
}
