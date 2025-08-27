// 36)Faça um algoritmo que receba o custo de um espetáculo teatral e o preço do convite esse 
// espetáculo. Esse programa deve calcular e mostrar: 
// •A quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja 
// alcançado. 
// •A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%. 


#include <stdio.h>
#include <math.h>

int main() {
    double custo_espetaculo, preco_convite;
    printf("Digite o custo do espetaculo: ");
    scanf("%lf", &custo_espetaculo);
    printf("Digite o preco do convite: ");
    scanf("%lf", &preco_convite);

    double convites_custo = custo_espetaculo / preco_convite; // Cálculo dos convites para cobrir o custo
    double convites_lucro = (custo_espetaculo * 1.23) / preco_convite; // Cálculo dos convites para 23% de lucro

    printf("Convites para cobrir o custo: %.0f\n", ceil(convites_custo)); // Exibição dos convites para cobrir o custo
    printf("Convites para 23%% de lucro: %.0f\n", ceil(convites_lucro)); // Exibição dos convites para 23% de lucro
    // Função ceil usada para arrendondar numeros para cima.
    return 0;
}