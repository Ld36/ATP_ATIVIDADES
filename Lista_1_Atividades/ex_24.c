// 24) Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para calcular seu 
// rendimento, ela deverá fornecer o valor constante da aplicação mensal, a taxa e o número de meses. 
// Sabendo-se que a fórmula usada para este cálculo é: 
// Valor acumulado = (P*(1 +i)n – 1)/i  em que i = taxa, P = aplicação mensal e n = número de meses.

#include <stdio.h>
#include <math.h>

int main() {
    double P, i, n, valor_acumulado;

    printf("Digite o valor da aplicacao mensal (P): ");
    scanf("%lf", &P);
    printf("Digite a taxa de juros (i) em decimal: ");
    scanf("%lf", &i);
    printf("Digite o numero de meses (n): ");
    scanf("%lf", &n);

    valor_acumulado = (P * (pow(1 + i, n) - 1)) / i; // Cálculo do valor acumulado

    printf("O valor acumulado na poupanca e: %.2f\n", valor_acumulado); // Exibição do valor acumulado

    return 0;
}