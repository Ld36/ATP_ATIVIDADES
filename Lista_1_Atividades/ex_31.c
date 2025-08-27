// 31) Faça um algoritmo que apresente, para um salário informado pelo usuário, um novo salário com 
// aumento de 37%. 

#include <stdio.h>

int main() {
    double salario_atual, novo_salario;

    printf("Digite o salario atual: ");
    scanf("%lf", &salario_atual);

    novo_salario = salario_atual * 1.37; // Cálculo do novo salário

    printf("O novo salario e: %.2f\n", novo_salario);

    return 0;
}