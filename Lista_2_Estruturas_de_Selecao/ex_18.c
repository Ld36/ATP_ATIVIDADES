// 18) 
// Uma empresa decidiu dar uma gratificação de Natal aos seus funcionários, baseada no 
// número de horas extras e no número de horas que o funcionário faltou ao trabalho. O valor 
// do prêmio é obtido pela consulta na tabela a seguir, em que: 
// H = (número de horas extras) – (2/3*(número de horas-falta)) 
// H (minutos) 
// Prêmio ($) 
// > 240 
// 1800 __| 2400 
// 500 
// 1200 __| 1800 
// 400 
// 600 __| 1200 
// 300 
// <= 600 
// 200 
// 100 
// Faça um programa que receba o número de horas extras e o número de 
// horas- falta em minutos de um funcionário.  Imprima o número de horas 
// extras em horas, o número de horas, o número de horas-falta em horas e o 
// valor do prêmio. 

#include <stdio.h>

int main() {
    int horas_extras, horas_falta;

    printf("Digite o numero de horas extras (em minutos): ");
    scanf("%d", &horas_extras);
    printf("Digite o numero de horas-falta (em minutos): ");
    scanf("%d", &horas_falta);

    int h = horas_extras - (2 * horas_falta) / 3; // Cálculo de H
    int premio; // Valor do prêmio

    if (h > 2400) { // H > 2400
        premio = 500;
    } else if (h >= 1800) { // H <= 2400 é implícito aqui
        premio = 400;
    } else if (h >= 1200) { // H <= 1800
        premio = 300;
    } else if (h >= 600) { // H <= 1200
        premio = 200;
    } else { // H < 600
        premio = 100;
    }
    
    printf("Horas extras: %.2f horas\n", (float)horas_extras / 60);
    printf("Horas-falta: %.2f horas\n", (float)horas_falta / 60);
    printf("Valor do premio: $%d\n", premio);

    return 0;
}