// 27) Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de
// conversão é: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (9 * celsius + 160) / 5; // Conversão para Fahrenheit

    printf("A temperatura em graus Fahrenheit e: %.2f\n", fahrenheit); // Exibição da temperatura em Fahrenheit

    return 0;
}