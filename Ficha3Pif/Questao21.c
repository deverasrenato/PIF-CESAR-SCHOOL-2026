#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char secreta = rand() % 26 + 'a';
    char chute;
    int tentativas = 0;

    printf("Adivinhe a letra (a-z):\n");
    do {
        scanf(" %c", &chute);
        tentativas++;
        if (chute < secreta) {
            printf("A letra secreta vem DEPOIS no alfabeto!\n");
        } else if (chute > secreta) {
            printf("A letra secreta vem ANTES no alfabeto!\n");
        }
    } while (chute != secreta);

    printf("Parabens! Acertou em %d tentativas.\n", tentativas);
    return 0;
}
