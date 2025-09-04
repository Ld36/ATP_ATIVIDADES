// 10) Faça um programa que receba um número, verifique se este número é par ou ímpar e 
// imprima a mensagem. 

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) { // Verifica se o número é par
        printf("O numero %d e par.\n", num);
    } else { // Caso contrário, é ímpar
        printf("O numero %d e impar.\n", num);
    }

    return 0;
}