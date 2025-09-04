// 22) Faça um programa que receba uma frase, conte e imprima o número de palavras desta frase. 

#include <stdio.h>
#include <string.h>

int main() {
    char frase[100]; // Supondo que a frase tenha no máximo 99 caracteres
    int palavras = 0, i; // Contador de palavras
    int em_palavra = 0; // Flag para indicar se estamos dentro de uma palavra

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); // Lê a frase com espaços

    for (i = 0; frase[i] != '\0'; i++) { // Percorre cada caractere da frase
        if (frase[i] == ' ' || frase[i] == '\n' || frase[i] == '\t') { // Verifica espaços, nova linha e tabulação
            em_palavra = 0; // Saiu de uma palavra
        } else if (em_palavra == 0) { // Encontrou o início de uma nova palavra
            em_palavra = 1; // Está dentro de uma palavra
            palavras++; // Incrementa o contador de palavras
        }
    }

    printf("A frase contem %d palavras.\n", palavras);

    return 0;
}