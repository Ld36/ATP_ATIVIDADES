// 11) Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o valor do imposto de renda a ser pago, sabendo que o imposto equivale a 5% do salário. 

#include <stdio.h>

int main() {
    double salario; // DECLARAÇÃO DE VARIAVEIS.
    printf("Digite o valor do salario: ");
    scanf("%lf", &salario); // RECEBENDO VALOR DO SALARIO

    printf("O imposto de renda a ser pago e: %.2f\n", salario * 0.05); // Cálculo do imposto de renda

    return 0;
}