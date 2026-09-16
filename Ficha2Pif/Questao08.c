#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int quadrado = numero * numero;
    float decima_parte = (float)numero / 10.0f;

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decima_parte);

    return 0;
}
