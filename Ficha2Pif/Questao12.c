#include <stdio.h>

int main() {
    int valor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);

    int antecessor = valor;
    int sucessor = valor;

    --antecessor;
    ++sucessor;
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}
