// 15) Faça um programa que mostre um menu com as seguintes opções: 
// •  soma 
// •  raiz quadrada 
// •  finalizar 
//      O programa deve receber a opção desejada, receber os dados necessários para a 
//      operação de cada opção, realizar a operação e imprimir o resultado. Na opção 
//      finalizar nada deve acontecer.

#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    double n1, n2;

    printf("Menu de opcoes:\n");
    printf("1 - Soma\n");
    printf("2 - Raiz quadrada\n");
    printf("3 - Finalizar\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    if (opcao == 1) { // Soma
        printf("Digite dois numeros para a soma: ");
        scanf("%lf %lf", &n1, &n2);
        printf("Resultado da soma: %.2f\n", n1 + n2);
    } else if (opcao == 2) { // Raiz quadrada
        printf("Digite um numero para a raiz quadrada: ");
        scanf("%lf", &n1);
        if (n1 >= 0) { // Verifica se o numero e nao negativo
            printf("Resultado da raiz quadrada: %.2f\n", sqrt(n1)); // Calcula e imprime a raiz quadrada
        } else { // Numero negativo
            printf("Nao e possivel calcular a raiz quadrada de um numero negativo.\n");
        }
    } else if (opcao == 3) { // Finalizar
        printf("Programa finalizado.\n");
    } else {
        printf("Opcao invalida.\n");
    }

    return 0;
}