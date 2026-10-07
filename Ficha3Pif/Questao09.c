#include <stdio.h>

int main() {
    float valor, soma = 0;
    int qtd = 0;

    printf("Digite valores positivos (valor negativo para encerrar):\n");
    while (1) {
        scanf("%f", &valor);
        if (valor < 0) break;
        soma += valor;
        qtd++;
    }

    if (qtd > 0) {
        printf("Quantidade: %d\n", qtd);
        printf("Soma: %.2f\n", soma);
        printf("Media: %.2f\n", soma / qtd);
    } else {
        printf("Nenhum valor valido foi fornecido.\n");
    }
    return 0;
}
