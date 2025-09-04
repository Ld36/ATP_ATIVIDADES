// 4) Faça um programa que receba a idade de uma pessoa e imprima mensagem de maioridade 
// ou não. 

#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade da pessoa: "); // Solicita a idade do usuário
    scanf("%d", &idade);

    if (idade >= 18) {  // Verifica se a pessoa é maior de idade
        printf("Maior de idade.\n");
    } else {
        printf("Menor de idade.\n");
    }

    return 0;
}
