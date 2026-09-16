#include <stdio.h>

int main() {
    char maiuscula;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);

    char minuscula = maiuscula + ('a' - 'A');

    printf("Letra minuscula correspondente: %c\n", minuscula);

    return 0;
}
