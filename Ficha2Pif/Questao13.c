#include <stdio.h>

int main() {
    float lado, base, altura;

    printf("--- Quadrado ---\n");
    printf("Digite o lado L: ");
    scanf("%f", &lado);
    float area_quadrado = lado * lado;

    printf("\n--- Retangulo e Triangulo Retangulo ---\n");
    printf("Digite a base B: ");
    scanf("%f", &base);
    printf("Digite a altura H: ");
    scanf("%f", &altura);

    float area_retangulo = base * altura;
    float area_triangulo = (base * altura) / 2.0f;

    printf("\n--- Resultados ---\n");
    printf("Area do Quadrado: %.2f\n", area_quadrado);
    printf("Area do Retangulo: %.2f\n", area_retangulo);
    printf("Area do Triangulo Retangulo: %.2f\n", area_triangulo);

    return 0;
}
