// 1 - Solicite Dois Valores Inteiros e depois some os dois.

#include <stdio.h> 

int main() {

    int valor1, valor2, soma; // Declaração das variáveis

    printf("Digite o primeiro valor: "); 
    scanf("%d", &valor1); // Leitura do primeiro valor
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2); // Leitura do segundo valor

    soma = valor1 + valor2; // SOMA DOS VALORES

    printf("A soma de %d + %d é %d\n", valor1, valor2, soma); // Exibição do resultado

    return 0;
}