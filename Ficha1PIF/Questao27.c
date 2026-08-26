/* =========================================================================
 * Conversor de Segundos para Horas, Minutos e Segundos
 * -------------------------------------------------------------------------
 * Este programa recebe um valor total em segundos e calcula o equivalente 
 * em horas, minutos e segundos restantes.
 * ========================================================================= */

#include <stdio.h>

int main() {
    // Declaração de variáveis com nomes claros em português
    int totalSegundos, horas, minutos, segundos, restoDivisao;

    // Solicita a entrada do usuário
    printf("Digite o tempo em segundos: \n");
    scanf("%d", &totalSegundos);

    // Processamento do tempo
    horas = totalSegundos / 3600;
    restoDivisao = totalSegundos % 3600;
    minutos = restoDivisao / 60;
    segundos = restoDivisao % 60;

    // Exibe o resultado formatado
    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s).\n", 
           totalSegundos, horas, minutos, segundos);

    return 0; // Finaliza o programa com sucesso
}
