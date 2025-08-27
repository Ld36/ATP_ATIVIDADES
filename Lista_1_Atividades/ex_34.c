// 34) Faça um algoritmo que receba o peso e a altura de uma pessoa e calcule o índice de massa 
// corpórea. Ele mede a relação entre peso e altura (peso em Kg, dividido pelo quadrado da altura em 
// metros). 

#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura); // Cálculo do IMC

    printf("O indice de massa corporal (IMC) e: %.2f\n", imc); // Exibição do IMC

    return 0;
}