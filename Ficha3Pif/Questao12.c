#include <stdio.h>

int main() {
    printf("Celsius\tFahrenheit\tKelvin\n");
    for (int c = 0; c <= 100; c += 5) {
        float f = (9.0 * c) / 5.0 + 32.0;
        float k = c + 273.15;
        printf("%d°C\t%.2f°F\t\t%.2fK\n", c, f, k);
    }
    return 0;
}
