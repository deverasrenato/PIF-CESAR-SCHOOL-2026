#include <stdio.h>

int main() {
    const int senha_secreta = 2026;
    int senha, tentativas = 0;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        tentativas++;

        if (senha == senha_secreta) {
            printf("Acesso Concedido!\nTentativas: %d\n", tentativas);
            return 0;
        }
        printf("Senha incorreta.\n");
    }

    printf("Conta Bloqueada por Seguranca!\n");
    return 0;
}
