// 17) 
// Faça um programa que receba a medida de um ângulo em graus, um número inteiro. 
// Determine e imprima o quadrante em que se localiza este ângulo. Considere os quadrantes 
// abaixo: 
// Ângulo  Quadrante 
// 0 |__ 90 
// 90 |__ 180 
// 1º quadrante 
// 2º quadrante 
// 180 |__ 270 
// 270 |__ 360 
// 3º quadrante 
// 4º quadrante 
// 0 __ -90 -90 |__ -180 
// 1º quadrante 
// 2º quadrante -180 |__ -270 -270 |__| -360 
// 3º quadrante 
// 4º quadrante 
// Para ângulos maiores que 360 graus, reduza ao intervalo de 0 a 360.

#include <stdio.h>

int main() {
    int angulo;

    printf("Digite a medida de um angulo em graus: ");
    scanf("%d", &angulo);

    // Reduz o angulo para o intervalo de 0 a 360
    angulo = angulo % 360;
    if (angulo < 0) { // Ajusta angulos negativos
        angulo += 360; // Converte para positivo
    }
    
    if (angulo >= 0 && angulo < 90) { // 1o quadrante
        printf("1o quadrante\n");
    } else if (angulo >= 90 && angulo < 180) { // 2o quadrante
        printf("2o quadrante\n");
    } else if (angulo >= 180 && angulo < 270) { // 3o quadrante
        printf("3o quadrante\n");
    } else if (angulo >= 270 && angulo < 360) { // 4o quadrante
        printf("4o quadrante\n");
    } else {
        printf("O angulo esta sobre um dos eixos.\n");
    }

    return 0;
}