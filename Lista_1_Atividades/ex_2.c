// 2) Faça um algoritmo que receba dois números reais, calcule e imprima a subtração do primeiro número pelo segundo.

#include <stdio.h>

int main(void) {

    float valor1, valor2, subtracao; // Declaração das variáveis

    printf("Digite o primeiro valor: \n"); 
    scanf("%f", &valor1); // Leitura do primeiro valor

    printf("Digite o segundo valor: \n");
    scanf("%f", &valor2); // Leitura do segundo valor

    subtracao = valor1 - valor2; // SUBTRAÇÃO DOS VALORES

    printf("A subtração de %f - %f é %f\n", valor1, valor2, subtracao); // Exibição do resultado

    return 0;
}