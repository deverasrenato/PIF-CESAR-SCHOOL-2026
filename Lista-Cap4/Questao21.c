#include <stdio.h>

int main() {
    float salario, percentual, aumento;
    int cargo;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);
    printf("Cargo (1 = Tecnico; 2 = Gerente; 3 = Demais cargos): ");
    scanf("%d", &cargo);

    if (cargo == 1) {
        if (salario <= 3000) {
            percentual = 0.15f;
        } else {
            percentual = 0.10f;
        }
    } else if (cargo == 2) {
        if (salario <= 5000) {
            percentual = 0.10f;
        } else {
            percentual = 0.05f;
        }
    } else if (cargo == 3) {
        percentual = 0.08f;
    } else {
        printf("Erro: cargo invalido.\n");
        return 0;
    }

    aumento = salario * percentual;

    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", salario + aumento);

    return 0;
}
