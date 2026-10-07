#include <stdio.h>

int main() {
    float nota, soma = 0, maior = -1, menor = 11;
    int qtd = 0;

    while (1) {
        printf("Digite a nota (-1.0 para sair): ");
        scanf("%f", &nota);
        if (nota == -1.0) break;

        if (nota >= 0.0 && nota <= 10.0) {
            soma += nota;
            qtd++;
            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        }
    }

    if (qtd > 0) {
        printf("Total de alunos: %d\n", qtd);
        printf("Maior nota: %.1f\n", maior);
        printf("Menor nota: %.1f\n", menor);
        printf("Media geral: %.2f\n", soma / qtd);
    } else {
        printf("Nenhuma nota registrada.\n");
    }
    return 0;
}
