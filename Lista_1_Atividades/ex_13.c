// 13 )Sabe-se que o kilowatt de energia custa um quinto do salário mínimo. Faça um algoritmo que 
// receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência. Calcule e imprima: 
// • o valor, em reais, de cada kilowatt; 
// • o valor, em reais, a ser pago por essa residência; 
// • o novo valor a ser pago por essa residência, a partir de um desconto de 15%.

#include <stdio.h>

int main() {
    double salario_minimo, kw_gastos; // DECLARAÇÃO DE VARIAVEIS.
    printf("Digite o valor do salario minimo: "); // SOLICITANDO ENTRADA
    scanf("%lf", &salario_minimo);
    printf("Digite a quantidade de quilowatts gastos: ");
    scanf("%lf", &kw_gastos);

    double valor_kw = salario_minimo / 5; // Cálculo do valor de cada kilowatt
    double valor_total = valor_kw * kw_gastos; // Cálculo do valor total a ser pago

    printf("O valor de cada kilowatt e: %.2f\n", valor_kw); // Exibição do valor de cada kilowatt
    printf("O valor total a ser pago e: %.2f\n", valor_total); // Exibição do valor total a ser pago
    printf("O novo valor com 15%% de desconto e: %.2f\n", valor_total * 0.85); // Cálculo do novo valor com desconto

    return 0;
}