// 26) Um sistema de equações lineares da forma ax + by = c, pode ser resolvido utilizando-se as 
// Faça um algoritmo para ler os coeficientes (a,b,c,d,e,f) das equações e calcular e exibir os valores de x e y. 

#include <stdio.h>

int main() {
    double a, b, c, d, e, f;
    printf("Digite os coeficientes (a, b, c, d, e, f): ");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f); // Leitura dos coeficientes

    double x = (c * e - b * f) / (a * e - b * d); // Cálculo de x
    double y = (a * f - c * d) / (a * e - b * d); // Cálculo de y

    printf("O valor de x e: %.2f\n", x); // Exibição do valor de x
    printf("O valor de y e: %.2f\n", y); // Exibição do valor de y

    return 0;
}