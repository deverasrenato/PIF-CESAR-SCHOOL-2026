#include <stdio.h>

int main() {
    int opcao;
    float salario;

    do {
        printf("\n--- MENU FOLHA DE PAGAMENTO ---\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Salario atual: R$ ");
                scanf("%f", &salario);
                if (salario <= 2000.0) salario *= 1.15;
                else salario *= 1.10;
                printf("Novo salario: R$ %.2f\n", salario);
                break;
            case 2:
                printf("Salario: R$ ");
                scanf("%f", &salario);
                if (salario <= 3000.0) printf("Desconto IR (8%%): R$ %.2f\n", salario * 0.08);
                else printf("Desconto IR (15%%): R$ %.2f\n", salario * 0.15);
                break;
            case 3:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 3);

    return 0;
}
