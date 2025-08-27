// 1 - 3) Faça um algoritmo que receba dois números inteiros, calcule e imprima a divisão do primeiro número pelo segundo.

#include <stdio.h> 

int main() {

    int valor1, valor2, resultado; // Declaração das variáveis

    printf("Digite o primeiro valor: \n"); 
    scanf("%d", &valor1); // Leitura do primeiro valor
    printf("Digite o segundo valor: \n");
    scanf("%d", &valor2); // Leitura do segundo valor

    resultado = valor1 % valor2; // DIVISÃO DOS VALORES

    printf("A divisão de %d / %d é %d\n", valor1, valor2, resultado); // Exibição do resultado

    return 0;
}