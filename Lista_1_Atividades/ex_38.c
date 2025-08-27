// 38) Considerando uma eleição de apenas 2 candidatos, elabore um algoritmo que leia do teclado o 
// número total de eleitores, o número de votos do primeiro candidato e o número de votos do segundo 
// candidato. Em seguida, o algoritmo deverá apresentar o percentual de votos de cada um dos candidatos 
// e o percentual de votos nulos. 

#include <stdio.h>

int main() {
    int total_eleitores, votos_cand1, votos_cand2;

    printf("Digite o numero total de eleitores: ");
    scanf("%d", &total_eleitores);
    printf("Digite os votos do primeiro candidato: ");
    scanf("%d", &votos_cand1);
    printf("Digite os votos do segundo candidato: ");
    scanf("%d", &votos_cand2);

    int votos_nulos = total_eleitores - votos_cand1 - votos_cand2; // Cálculo dos votos nulos

    printf("Percentual de votos do candidato 1: %.2f%%\n", ((double)votos_cand1 / total_eleitores) * 100); // Cálculo do percentual de votos do candidato 1
    printf("Percentual de votos do candidato 2: %.2f%%\n", ((double)votos_cand2 / total_eleitores) * 100); // Cálculo do percentual de votos do candidato 2
    printf("Percentual de votos nulos: %.2f%%\n", ((double)votos_nulos / total_eleitores) * 100); // Cálculo do percentual de votos nulos

    return 0;
}