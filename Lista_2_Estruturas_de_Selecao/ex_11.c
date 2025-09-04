// 11) Faça um programa que receba dois números e imprima o menor dos dois. 

#include <stdio.h>

int main() {
    float n1, n2; // Declaração das variáveis para armazenar os números

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    if (n1 < n2) { // Se n1 for menor que n2
        printf("O menor numero e: %.2f\n", n1);
    } else if (n2 < n1) { // Se n2 for menor que n1
        printf("O menor numero e: %.2f\n", n2);
    } else { // Se os numeros forem iguais
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}