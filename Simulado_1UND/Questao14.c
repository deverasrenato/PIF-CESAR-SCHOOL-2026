#include <stdio.h>
#include <stdlib.h>

int main() {
    const int SENHA_CORRETA = 2026;
    int senha_digitada;
    int tentativas = 0;
    int acesso_concedido = 0;

    while (tentativas < 3) {
        printf("Digite a senha numerica: ");
        scanf("%d", &senha_digitada);

        tentativas++;

        if (senha_digitada == SENHA_CORRETA) {
            printf("\nAcesso Concedido!\n");
            acesso_concedido = 1;
            break;
        } else {
            printf("Senha incorreta! Tentativas restantes: %d\n\n", 3 - tentativas);
        }
    }

    if (!acesso_concedido) {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}
