// 9) Faça um programa que receba o  preço de um produto e o seu código de orígem e imprima 
// a sua procedência. A procedência obedece a seguinte tabela: 
//  Código  Procedência 
//  1   Sul 
//  2   Norte 
//  3   Leste 
//  4   Oeste 
//  5 ou 6  Nordeste 
//  7.8 ou 9  Sudeste 
//  10 até 20  Centro-Oeste 
//  21 até 30  Nordeste

#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o codigo de origem do produto: ");
    scanf("%d", &codigo);

    switch (codigo) {  // Estrutura de seleção múltipla
        case 1:  // Sul
            printf("Procedencia: Sul\n");
            break;
        case 2:  // Norte
            printf("Procedencia: Norte\n");
            break;
        case 3:  // Leste
            printf("Procedencia: Leste\n");
            break;
        case 4:  // Oeste
            printf("Procedencia: Oeste\n");
            break;
        case 5:  // Nordeste   
        case 6:
            printf("Procedencia: Nordeste\n");
            break;
        case 7:
        case 8:
        case 9: // Sudeste
            printf("Procedencia: Sudeste\n");
            break;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:    // Centro-Oeste
            printf("Procedencia: Centro-Oeste\n");
            break;
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
            printf("Procedencia: Nordeste\n");
            break;
        default:
            printf("Codigo de origem invalido.\n");
            break;
    }

    return 0;
}