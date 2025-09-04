// 19) 
// Faça um programa que receba o valor do salário mínimo, o número de horas trabalhadas, 
// o número de dependentes do funcionário e a quantidade de horas extras trabalhadas. Calcule 
// e imprima o salário a receber do funcionário seguindo as regras abaixo: 
// •  o valor da hora trabalhada é igual a 1/5 do salário mínimo; 
// •  o salário do mês é igual ao número de horas trabalhadas vezes o valor da hora 
// trabalhada; 
// •  para cada dependente acréscimo de 32 reais; 
// •  para cada hora extra trabalhada o cálculo do valor da hora trabalhada acrescida de 
// 50%; 
// •  o salário bruto é igual ao salário do mês mais os valores dos dependentes mais os 
// valores das horas extras; 
// •  o cálculo do valor do imposto de renda retido na fonte segue a tabela abaixo: 
// IRRF 
// Salário bruto 
// isento 
// 10,00% 
// Inferior a 200 
// 20,00% 
// de 200 até 500 
// superior a 500 
// •  o salário líquido é igual ao salário bruto menos IRRF; 
// •  a gratificação segue a próxima tabela: 
// Salário líquido 
// Gratificação 
// Até 350 
// Superior a 350 
// 100 reais 
// 50 reais

#include <stdio.h>

int main() {
    float salario_minimo, horas_trabalhadas, horas_extras, salario_bruto, irrf, salario_liquido, gratificacao, salario_receber;
    int num_dependentes;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);
    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horas_trabalhadas);
    printf("Digite o numero de dependentes: ");
    scanf("%d", &num_dependentes);
    printf("Digite a quantidade de horas extras: ");
    scanf("%f", &horas_extras);

    float valor_hora = salario_minimo / 5;
    float salario_mes = horas_trabalhadas * valor_hora;
    float valor_dependentes = num_dependentes * 32.0;
    float valor_horas_extras = horas_extras * valor_hora * 1.5;

    salario_bruto = salario_mes + valor_dependentes + valor_horas_extras;

    if (salario_bruto < 200.0) {
        irrf = 0.0;
    } else if (salario_bruto <= 500.0) {
        irrf = salario_bruto * 0.10;
    } else {
        irrf = salario_bruto * 0.20;
    }

    salario_liquido = salario_bruto - irrf;

    if (salario_liquido <= 350.0) {
        gratificacao = 100.0;
    } else {
        gratificacao = 50.0;
    }

    salario_receber = salario_liquido + gratificacao;

    printf("\n--- Detalhes do Salario ---\n");
    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("IRRF: R$ %.2f\n", irrf);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);
    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Salario a receber: R$ %.2f\n", salario_receber);
    
    return 0;
}