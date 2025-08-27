// 32) Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: 
// • A idade dessa pessoa; 
// •Quantos anos ela terá em 2028.

#include <stdio.h>

int main() {
    int ano_nascimento, ano_atual, idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    idade = ano_atual - ano_nascimento; // Cálculo da idade

    printf("A idade atual e: %d\n", idade);
    printf("Em 2028, a idade sera: %d\n", idade + (2028 - ano_atual)); // Cálculo da idade em 2028

    return 0;
}