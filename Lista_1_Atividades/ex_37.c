// 37) Elabore um algoritmo para efetuar o cálculo da quantidade de combustível gasto em uma viagem, 
// utilizando-se um automóvel que faz 12 Kms por litro. Para obter o cálculo, o usuário deverá fornecer o 
// tempo gasto e a velocidade média durante a viagem. Desta forma, será possível obter a distância 
// percorrida (distância = tempo * velocidade). 

#include <stdio.h>

int main() {
    double tempo_horas, velocidade_media;
    printf("Digite o tempo gasto (em horas): ");
    scanf("%lf", &tempo_horas);
    printf("Digite a velocidade media (km/h): ");
    scanf("%lf", &velocidade_media);

    double distancia = tempo_horas * velocidade_media; // Cálculo da distância
    double litros_gastos = distancia / 12; // Cálculo da quantidade de litros gastos

    printf("A quantidade de combustivel gasto e: %.2f litros\n", litros_gastos); // Exibição da quantidade de combustível gasto

    return 0;
}