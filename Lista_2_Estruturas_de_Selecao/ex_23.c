// 23) Faça um programa que receba uma frase, conte e imprima a quantidade de vezes em 
// que aparece a palavra “aula”. 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[200]; // A frase pode ter até 199 caracteres + '\0'
    int count = 0; // Contador de ocorrências
    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); // Lê a frase com espaços

    char *posicao = strstr(frase, "aula"); // Procura a primeira ocorrência de "aula"
    while (posicao != NULL) { // Enquanto encontrar "aula"
        count++;
        posicao = strstr(posicao + 1, "aula"); // Procura a próxima ocorrência
    }

    printf("A palavra 'aula' aparece %d vezes.\n", count);
    
    return 0;
}