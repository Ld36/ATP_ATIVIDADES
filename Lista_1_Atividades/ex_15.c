// 15) Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e imprima: 
// •  a idade dessa pessoa; 
// •  essa idade convertida em semanas

#include <stdio.h>

int main() {
    int ano_nascimento, ano_atual;
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    int idade = ano_atual - ano_nascimento; // Cálculo da idade

    printf("A idade e: %d anos\n", idade);
    printf("A idade em semanas e: %d semanas\n", idade * 52); // Cálculo da idade em semanas

    return 0;
}