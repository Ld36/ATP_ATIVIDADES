// 29) Faça um algoritmo que receba o preço de custo de um produto e mostre o valor de venda. Sabe-se 
// que o preço de custo receberá um acréscimo de acordo com um percentual informado pelo usuário. 

#include <stdio.h>

int main() {
    double preco_custo, percentual_acrescimo, valor_venda;

    printf("Digite o preco de custo do produto: ");
    scanf("%lf", &preco_custo);

    printf("Digite o percentual de acrescimo: ");
    scanf("%lf", &percentual_acrescimo);

    valor_venda = preco_custo + (preco_custo * percentual_acrescimo / 100); // Cálculo do valor de venda

    printf("O valor de venda do produto e: %.2f\n", valor_venda); // Exibição do valor de venda

    return 0;
}