// 12)Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o novo salário sabendo-se que este sofreu um aumento de 25%. 

#include <stdio.h>

int main() {
    double salario; // DECLARAÇÃO DE VARIAVEIS.
    printf("Digite o valor do salario: "); // SOLICITANDO ENTRADA
    scanf("%lf", &salario); // RECEBENDO VALOR DO SALARIO

    printf("O novo salario com 25%% de aumento e: %.2f\n", salario * 1.25); // Cálculo do novo salário
    
    return 0;
}