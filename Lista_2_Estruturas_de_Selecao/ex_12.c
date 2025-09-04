// 12) Faça um programa que receba três notas de um aluno, calcule e imprima a média 
// aritmética entre essas três notas e uma mensagem que segue a tabela abaixo: 
//  Média    Mensagem 
//  0.0 |__ 5.0  reprovado 
//  5.0 |__ 7.0  exame 
//  7.0 |__| 10.0  aprovado 

#include <stdio.h>

int main() {
    float n1, n2, n3, media; // notas e media

    printf("Digite as tres notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3); // leitura das notas

    media = (n1 + n2 + n3) / 3.0; // calcula a media

    printf("Media: %.2f\n", media);

    if (media >= 7.0) { // verifica a faixa da media
        printf("Aprovado\n");
    } else if (media >= 5.0 && media < 7.0) { // entre 5.0 e 7.0
        printf("Exame\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}