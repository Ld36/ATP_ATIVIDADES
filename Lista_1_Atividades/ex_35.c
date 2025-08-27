// 35)Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de 
// 25% na diária. Sendo informados, através do teclado, o número de apartamentos do hotel e o valor da 
// diária por apartamento para o final de semana completo, elabore um programa para calcular: 
// • Valor promocional da diária; 
// • Valor total a ser arrecadado caso a ocupação neste final de semana atinja 100%; 
// • Valor total a ser arrecadado caso a ocupação neste final de semana atinja 70%; 
// • Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%. 

#include <stdio.h>

int main() {
    int num_apartamentos;
    double valor_diaria;
    printf("Digite o numero de apartamentos: ");
    scanf("%d", &num_apartamentos);
    printf("Digite o valor da diaria: ");
    scanf("%lf", &valor_diaria);

    double valor_promocional = valor_diaria * 0.75; // Cálculo do valor promocional
    double arrecadado_100 = num_apartamentos * valor_promocional; // Cálculo para 100% de ocupação
    double arrecadado_70 = arrecadado_100 * 0.70; // Cálculo para 70% de ocupação
    double valor_perdido = (valor_diaria * num_apartamentos) - arrecadado_100; // Cálculo do valor perdido

    printf("Valor promocional da diaria: %.2f\n", valor_promocional); // Exibição do valor promocional
    printf("Valor arrecadado (100%%): %.2f\n", arrecadado_100);
    printf("Valor arrecadado (70%%): %.2f\n", arrecadado_70);
    printf("Valor perdido com a promocao: %.2f\n", valor_perdido);
    
    return 0;
}