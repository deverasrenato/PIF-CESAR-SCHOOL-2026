#include <stdio.h>

int main() {
    int total, entregue, troco;
    int c100, c50, c20, c10, c5 = 0, c2 = 0;
    int resto;

    printf("Digite o valor total a pagar: ");
    scanf("%d", &total);
    printf("Digite o valor entregue pelo cliente: ");
    scanf("%d", &entregue);

    if (total <= 0 || entregue <= 0) {
        printf("Erro: os valores devem ser positivos.\n");
        return 0;
    }

    if (entregue < total) {
        printf("Erro: valor entregue insuficiente.\n");
        return 0;
    }

    troco = entregue - total;
    printf("Troco: R$ %d\n", troco);

    /*
     * As cedulas de 5 e 2 cobrem o final do troco (unidade). Escolhemos pela
     * unidade para sempre fechar o valor com o menor numero de cedulas
     * (ex.: troco 13 = 5 + 2 + 2 + 2 + 2, e nao 10 + 3).
     */
    switch (troco % 10) {
        case 1: c5 = 1; c2 = 3; break;
        case 2: c2 = 1; break;
        case 3: c5 = 1; c2 = 4; break;
        case 4: c2 = 2; break;
        case 5: c5 = 1; break;
        case 6: c2 = 3; break;
        case 7: c5 = 1; c2 = 1; break;
        case 8: c2 = 4; break;
        case 9: c5 = 1; c2 = 2; break;
    }

    resto = troco - (c5 * 5 + c2 * 2);

    if (resto < 0) {
        printf("Nao e possivel formar esse troco com as cedulas disponiveis.\n");
        return 0;
    }

    c100 = resto / 100;
    resto = resto % 100;
    c50 = resto / 50;
    resto = resto % 50;
    c20 = resto / 20;
    resto = resto % 20;
    c10 = resto / 10;

    if (c100 > 0) printf("%d cedula(s) de R$ 100\n", c100);
    if (c50 > 0) printf("%d cedula(s) de R$ 50\n", c50);
    if (c20 > 0) printf("%d cedula(s) de R$ 20\n", c20);
    if (c10 > 0) printf("%d cedula(s) de R$ 10\n", c10);
    if (c5 > 0) printf("%d cedula(s) de R$ 5\n", c5);
    if (c2 > 0) printf("%d cedula(s) de R$ 2\n", c2);

    return 0;
}
