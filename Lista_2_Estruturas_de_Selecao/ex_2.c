// 2) Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferiora 500 
// reais. Escreva um programa que receba o salário de um funcionário e imprima o valor do 
// salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento. 

#include <stdio.h>

int main() {
    float salario; // Declaração da variável para o salário

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    if (salario < 500.0) {
        float novo_salario = salario * 1.30; // Cálculo do novo salário com aumento de 30%
        printf("Salario reajustado: %.2f\n", novo_salario);
    } else {
        printf("Funcionario nao tem direito ao aumento.\n");
    }

    return 0;
}