// 19) Crie um programa que receba valores quaisquer e mostre a média entre eles, o somatório entre eles e o resto da divisão do somatório por cada um dos valores.

#include <stdio.h>
#include <math.h>

int main() {
    double v1, v2, v3;
    printf("Digite tres valores: ");
    scanf("%lf %lf %lf", &v1, &v2, &v3); // Leitura dos valores

    double somatorio = v1 + v2 + v3; // Cálculo do somatório

    printf("A media e: %.2f\n", somatorio / 3);
    printf("O somatorio e: %.2f\n", somatorio);
    printf("O resto da divisao do somatorio por v1 e: %.2f\n", fmod(somatorio, v1)); // Cálculo do resto da divisão
    printf("O resto da divisao do somatorio por v2 e: %.2f\n", fmod(somatorio, v2)); 
    printf("O resto da divisao do somatorio por v3 e: %.2f\n", fmod(somatorio, v3)); 

    return 0;
}