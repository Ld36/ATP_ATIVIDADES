// 8) No curso de Desenvolvimento de Software, a nota final do estudante é calculada a partir de 
// 3 notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação semestral 
// e a um exame final. As notas variam de 0 a 10 e a nota final é média ponderada das 3 notas 
// mencionadas. A tabela a seguir fornece os pesos das notas: 
//  Laboratório  - peso 2 
//  Av. Semestral  - peso 3 
//  Exame final  - peso 5 
//      Faça um programa que receba as 3 notas do estudante, calcule e imprima a 
//      média final e o conceito desse estudante. 
//      O conceito segue a tabela abaixo: 
//  média final       conceito 
//  8.0 |__|    10.0   A 
//  7.0 |__|    8.0    B 
//  6.0 |__|    7.0    C 
//  5.0 |__|    6.0    D 
//      <       5.0    E 

#include <stdio.h>

int main() {
    float lab, semestral, final, media; // notas e media
    char conceito; // conceito

    printf("Digite a nota do trabalho de laboratorio: ");  // entrada da nota do trabalho de laboratorio
    scanf("%f", &lab);
    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f", &semestral);
    printf("Digite a nota do exame final: ");
    scanf("%f", &final);

    media = (lab * 2 + semestral * 3 + final * 5) / 10.0; // calculo da media ponderada
    // atribuicao do conceito baseado na media
    if (media >= 8.0 && media <= 10.0) { // intervalo valido para conceito A
        conceito = 'A'; // conceito A
    } else if (media >= 7.0 && media < 8.0) {
        conceito = 'B';
    } else if (media >= 6.0 && media < 7.0) {
        conceito = 'C';
    } else if (media >= 5.0 && media < 6.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    printf("Media final: %.2f\n", media);
    printf("Conceito: %c\n", conceito);

    return 0;
}