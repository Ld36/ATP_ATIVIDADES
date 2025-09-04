// 5) Faça um programa que calcule e imprima o salário reajustado de um funcionário de acordo 
// com a seguinte regra: 
// •  salários até 300, reajuste de 50%; 
// •  salários maiores que 300, reajuste de 30%.

#include <stdio.h>

int main() {
    float salario;

    printf("Digite o salario do funcionario: "); // Exemplo: 250.00
    scanf("%f", &salario);

    if (salario <= 300.0) { // Verifica se o salário é até 300
        float novo_salario = salario * 1.50;
        printf("Salario reajustado: %.2f\n", novo_salario);
    } else {
        float novo_salario = salario * 1.30; // Salário maior que 300
        printf("Salario reajustado: %.2f\n", novo_salario);
    }

    return 0;
}