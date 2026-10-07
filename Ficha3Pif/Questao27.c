#include <stdio.h>

int main() {
    int valor;
    printf("Valor do saque: R$ ");
    scanf("%d", &valor);

    int cedulas[] = {100, 50, 20, 10, 5, 2};
    for (int i = 0; i < 6; i++) {
        int qtd = 0;
        while (valor >= cedulas[i]) {
            valor -= cedulas[i];
            qtd++;
        }
        if (qtd > 0) printf("%d cedula(s) de R$ %d\n", qtd, cedulas[i]);
    }

    if (valor > 0) printf("Sobrou R$ %d (sem cedulas compativeis)\n", valor);
    return 0;
}
