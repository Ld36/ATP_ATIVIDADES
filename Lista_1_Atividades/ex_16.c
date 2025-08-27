// 16) Crie um programa que receba três nomes quaisquer por meio da linha de execução do programa, e 
// os imprima na tela da seguinte maneira: o primeiro e o último nomes serão impressos na primeira linha 
// um após o outro, o outro nome (o segundo) será impresso na segunda linha. 

#include <stdio.h>

int main(int argc, char *argv[]) {
    // Para rodar, use: ./a.out nome1 nome2 nome3
    if (argc < 4) { // Verificação do número de argumentos
        printf("Por favor, forneca 3 nomes como argumentos.\n"); // Mensagem de erro
        return 1;
    }

    printf("%s %s\n", argv[1], argv[3]); // Impressão do primeiro e último nomes
    printf("%s\n", argv[2]); // Impressão do segundo nome

    return 0;
}