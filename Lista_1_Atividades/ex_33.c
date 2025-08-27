// 33) Cada degrau de uma escada tem uma altura X. Faça um algoritmo que receba essa altura e a altura
// que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá
// subir para atingir seu objetivo.

#include <stdio.h>

int main() {
    float altura_degrau, altura_desejada;
    int num_degraus;

    printf("Digite a altura de cada degrau (em metros): ");
    scanf("%f", &altura_degrau);

    printf("Digite a altura desejada (em metros): ");
    scanf("%f", &altura_desejada);

    num_degraus = altura_desejada / altura_degrau; // Cálculo do número de degraus

    printf("O usuario deve subir %d degraus para atingir a altura desejada.\n", num_degraus);

    return 0;
}