// 18) Crie um programa que receba a largura e o comprimento de um lote de terra e mostre a área total existente. 

#include <stdio.h>

int main() {
    double largura, comprimento; // Declaração das variáveis
    printf("Digite a largura do lote: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do lote: ");
    scanf("%lf", &comprimento);

    printf("A area total do lote e: %.2f\n", largura * comprimento); // Cálculo da área total

    return 0;
}