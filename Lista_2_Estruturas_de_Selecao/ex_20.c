// 20) Faça um programa para resolver equações do 2º grau. 

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Digite os coeficientes da equacao de 2o grau (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c; // Calcula o discriminante

    if (a == 0) { // Verifica se 'a' é zero
        printf("Nao e uma equacao do segundo grau.\n"); // Verifica se 'a' é zero
    } else if (delta < 0) { // Verifica se o discriminante é negativo
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) { // Verifica se o discriminante é zero
        x1 = -b / (2 * a); // Calcula a raiz unica
        printf("A equacao possui uma unica raiz real: x = %.2f\n", x1);
    } else { // Caso o discriminante seja positivo
        x1 = (-b + sqrt(delta)) / (2 * a); // Calcula as duas raizes reais
        x2 = (-b - sqrt(delta)) / (2 * a);  // Calcula as duas raizes reais
        printf("A equacao possui duas raizes reais:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}