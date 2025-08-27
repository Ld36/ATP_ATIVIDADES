// 1) Faça um programa que receba quatro notas de um aluno, calcule e imprima a média aritmética
// das notas e a mensagem de aprovado para média superior ou igual a 7.0 ou a mensagem de
// reprovado para média inferior a 7.0.

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4; // Cálculo da média

    if (media >= 7.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}