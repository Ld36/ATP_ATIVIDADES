// 26) Escreva um programa que leia o valor de dois números inteiros e a operação aritmética 
// desejada: calcule, então, a reposta adequada. Utilize os símbolos da tabela a seguir para ler 
// qual a operação aritmética escolhida: 
// Símbolo 
// Operação aritmética 
// + 
// adição - 
// subtração 
// * 
// multiplicação 
// / 
// divisão 

#include <stdio.h>

int main() {
    int num1, num2;
    char operacao;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch (operacao) { // Note o espaço antes de %c para ignorar qualquer espaço em branco
        case '+': // adição
            printf("Resultado: %d\n", num1 + num2);
            break;
        case '-': // subtração
            printf("Resultado: %d\n", num1 - num2);
            break;
        case '*': // multiplicação
            printf("Resultado: %d\n", num1 * num2);
            break;
        case '/': // divisão
            if (num2 != 0) { // Evitar divisão por zero
                printf("Resultado: %.2f\n", (float)num1 / num2);
            } else { // Divisão por zero
                printf("Erro: Divisao por zero.\n");
            }
            break;
        default:
            printf("Operacao invalida.\n");
            break;
    }
    return 0;
}