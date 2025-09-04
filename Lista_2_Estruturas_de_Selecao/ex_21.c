// 21) Faça um programa que receba uma frase, conte e imprima o número de vogais desta 
//     frase. 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[100]; // Assumindo que a frase terá no máximo 99 caracteres
    int i, vogais = 0; // Contador de vogais

    printf("Digite uma frase: "); 
    fgets(frase, sizeof(frase), stdin); // 

    for (i = 0; i < strlen(frase); i++) { // Percorre cada caractere da frase
        char c = tolower(frase[i]); // Converte para minúsculo para facilitar a comparação
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') { // Verifica se é uma vogal
            vogais++;
        }
    }

    printf("A frase contem %d vogais.\n", vogais);

    return 0;
}