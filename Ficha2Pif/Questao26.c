#include <stdio.h>

int main() {
    float comprimento, largura, preco_metro;

    printf("Digite o comprimento do terreno (metros): ");
    scanf("%f", &comprimento);
    printf("Digite a largura do terreno (metros): ");
    scanf("%f", &largura);
    printf("Digite o preco do metro de arame farpado (R$): ");
    scanf("%f", &preco_metro);

    float perimetro = 2.0f * (comprimento + largura);
    float metros_totais_arame = perimetro * 3.0f;
    float custo_total = metros_totais_arame * preco_metro;

    printf("Metros de arame farpado necessarios: %.2f m\n", metros_totais_arame);
    printf("Custo total do cercamento: R$ %.2f\n", custo_total);

    return 0;
}
