#include <stdio.h>

int main() {
    int hora_inicio, min_inicio, seg_inicio;
    int duracao_segundos;

    printf("Digite o horario de inicio (horas minutos segundos): ");
    scanf("%d %d %d", &hora_inicio, &min_inicio, &seg_inicio);
    printf("Digite a duracao total do experimento (em segundos): ");
    scanf("%d", &duracao_segundos);

    int total_segundos_inicio = hora_inicio * 3600 + min_inicio * 60 + seg_inicio;
    int total_segundos_fim = total_segundos_inicio + duracao_segundos;

    int hora_fim = (total_segundos_fim / 3600) % 24;
    int min_fim = (total_segundos_fim % 3600) / 60;
    int seg_fim = total_segundos_fim % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", hora_fim, min_fim, seg_fim);

    return 0;
}
