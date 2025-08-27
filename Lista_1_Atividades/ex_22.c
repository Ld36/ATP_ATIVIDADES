// 22)Escreva um algoritmo para trocar os valores de três variáveis A, B e C de modo que A fique com o 
// valor de B, B fique com o valor de C e C fique com o valor de A.

#include <stdio.h>

int main() {
    int A, B, C, temp;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Troca os valores
    temp = A;
    A = B;
    B = C;
    C = temp;

    printf("Os novos valores sao: A = %d, B = %d, C = %d\n", A, B, C); // Exibição dos novos valores
    return 0;
}