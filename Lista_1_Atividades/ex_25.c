// 25) Faça um algoritmo que após a entrada de uma determinada distância entre dois pontos (em KM) e 
// uma determinada velocidade (km/h), diga qual o tempo médio que levará para chegada a esse local e 
// qual a velocidade em metros/segundo. 

#include <stdio.h>

int main() {
    double distancia, velocidade, tempo;

    printf("Digite a distancia entre os pontos (em KM): ");
    scanf("%lf", &distancia);
    printf("Digite a velocidade (em km/h): ");
    scanf("%lf", &velocidade);

    tempo = distancia / velocidade; // Tempo em horas
    double velocidade_metros_segundo = (velocidade * 1000) / 3600; // Conversão para m/s

    printf("O tempo medio de chegada e: %.2f horas\n", tempo); // Exibição do tempo médio de chegada
    
    printf("A velocidade em metros/segundo e: %.2f m/s\n", velocidade_metros_segundo); // Exibição da velocidade em m/s

    return 0;
}