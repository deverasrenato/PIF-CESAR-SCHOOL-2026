#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_segundos, horas, minutos, segundos_restantes;

    printf("Informe o tempo em segundos: ");
    scanf("%d", &total_segundos);

    horas = total_segundos / 3600;
    segundos_restantes = total_segundos % 3600;
    minutos = segundos_restantes / 60;
    segundos_restantes = segundos_restantes % 60;

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n", 
           total_segundos, horas, minutos, segundos_restantes);

    return 0;
}
