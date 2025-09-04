// 6) Faça um programa que receba a altura e o sexo de uma pessoa, calcule e imprima o seu 
// peso ideal, utilizando as seguintes fórmulas: 
// •  para homens: (72.7 * H)  - 58; 
// •  para mulheres: (62.1 * H) – 44.7. 

#include <stdio.h>

int main() {
    float altura, peso_ideal; 
    char sexo; // 'h' para homem, 'm' para mulher

    printf("Digite a altura (em metros): "); 
    scanf("%f", &altura);
    printf("Digite o sexo (h para homem, m para mulher): ");
    scanf(" %c", &sexo);

    if (sexo == 'h' || sexo == 'H') { // Considera 'H' maiusculo tambem
        peso_ideal = (72.7 * altura) - 58; // Formula para homens
        printf("Peso ideal para homem: %.2f kg\n", peso_ideal);
    } else if (sexo == 'm' || sexo == 'M') {
        peso_ideal = (62.1 * altura) - 44.7; // Formula para mulheres
        printf("Peso ideal para mulher: %.2f kg\n", peso_ideal);
    } else {
        printf("Sexo invalido.\n");
    }

    return 0;
}