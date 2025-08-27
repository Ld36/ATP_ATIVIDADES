//14) Faça um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e imprima: 
// •  o peso dessa pessoa em gramas; 
//• se essa pessoa engordar 5%, qual será seu novo peso em gramas.

#include <stdio.h>

int main() {
    int peso_kg;
    printf("Digite o peso em Kg: ");
    scanf("%d", &peso_kg);

    printf("O peso em gramas e: %d\n", peso_kg * 1000); // Cálculo do peso em gramas
    printf("O novo peso em gramas (apos engordar 5%%) e: %d\n", (peso_kg * 1.05) * 1000); // Cálculo do novo peso em gramas

    return 0;
}