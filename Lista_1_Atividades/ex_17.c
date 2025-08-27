// 17) Faça um programa que receba a quantidade e o valor de três produtos, no seguinte formato: 
// quantidade1 valor1 quantidade2 valor2 quantidade3 valor3. O programa deve calcular esses valores 
// seguindo a fórmula total =  quantidade1* valor1 + quantidade2 * valor2 + quantidade3 * valor3. O valor 
// total  deve ser apresentado no final da execução do programa. 

#include <stdio.h>

int main() {
    int q1, q2, q3; // Declaração das variáveis inteiras
    double v1, v2, v3; // Declaração das variáveis de ponto flutuante

    printf("Digite a quantidade e o valor do produto 1: ");
    scanf("%d %lf", &q1, &v1);
    printf("Digite a quantidade e o valor do produto 2: ");
    scanf("%d %lf", &q2, &v2);
    printf("Digite a quantidade e o valor do produto 3: ");
    scanf("%d %lf", &q3, &v3);

    double total = (q1 * v1) + (q2 * v2) + (q3 * v3); // Cálculo do valor total

    printf("O valor total e: %.2f\n", total); // Exibição do valor total

    return 0;
}