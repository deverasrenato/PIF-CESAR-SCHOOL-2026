#include <stdio.h>

int main() {
    int opcao;

    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Direcionando para Consulta de Saldo...\n");
            break;
        case 2:
            printf("Direcionando para Extrato...\n");
            break;
        case 3:
            printf("Direcionando para Transferencia...\n");
            break;
        case 4:
            printf("Direcionando para um Atendente...\n");
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
