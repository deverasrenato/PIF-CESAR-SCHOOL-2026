#include <stdio.h>

int main() {
    float valor, final, parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor);
    printf("Pagamento (1 = a vista com 10%% de desconto; 2 = parcelado em 3x): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        final = valor * 0.90f;
        comissao = final * 0.05f;
        printf("Valor final a pagar: R$ %.2f\n", final);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        parcela = valor / 3;
        comissao = valor * 0.05f;
        printf("Valor de cada parcela: R$ %.2f\n", parcela);
        printf("Comissao do vendedor: R$ %.2f\n", comissao);
    } else {
        printf("Erro: opcao invalida.\n");
    }

    return 0;
}
