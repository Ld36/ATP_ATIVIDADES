// 28) A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça
// um algoritmo que receba um valor de uma compra e mostre o valor das prestações

#include <stdio.h>

int main() {
    double valor_compra, prestacao;

    printf("Digite o valor da compra: ");
    scanf("%lf", &valor_compra); // Leitura do valor da compra

    prestacao = valor_compra / 5; // Cálculo do valor da prestação

    printf("O valor de cada prestacao e: %.2f\n", prestacao);

    return 0;
}