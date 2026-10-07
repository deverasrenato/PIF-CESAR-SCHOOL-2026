#include <stdio.h>

#define SENHA 2026

int main() {
    int senha_user;
    int tentativas = 0;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha_user);

        tentativas++;

        if (senha_user == SENHA) {
            printf("\nAcesso Concedido!\n");
            return 0;
        } else {
            printf("Senha incorreta! Restam %d tentativas.\n\n", 3 - tentativas);
        }
    }

    printf("Conta Bloqueada!\n");

    return 0;
}
