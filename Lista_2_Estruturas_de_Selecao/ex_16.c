// 16) Uma companhia de seguros tem três categorias de seguros baseadas na idade e na 
// ocupação do segurado. Somente pessoas com pelo menos 18 anos e não mais de 70 anos 
// podem adquirir apólices de seguros. Quanto às classes de ocupações foram definidos três 
// grupos de risco. A tabela  a seguir fornece as categorias em função da caixa de idade e do 
// grupo de risco: 
 
// idade 
// Grupo de risco 
// Baixo Médio Alto 
// 18 a 24 7 8 9 
// 25 a 40 4 5 6 
// 41 a 70 1 2 3 
   
//  Faça um programa que receba a idade e o grupo de risco (b, m ou a) e   
//  determine e imprima o código do seguro.

#include <stdio.h>

int main() {
    int idade;
    char grupo_risco;

    printf("Digite a idade do segurado: ");
    scanf("%d", &idade);
    printf("Digite o grupo de risco (b, m ou a): ");
    scanf(" %c", &grupo_risco);

    if (idade < 18 || idade > 70) {
        printf("Idade fora da faixa permitida para seguro.\n");
    } else {
        if (idade >= 18 && idade <= 24) { // idade entre 18 e 24
            if (grupo_risco == 'b') { // grupo de risco baixo
                printf("Codigo do seguro: 7\n");
            } else if (grupo_risco == 'm') { // grupo de risco medio
                printf("Codigo do seguro: 8\n");
            } else { // grupo de risco alto
                printf("Codigo do seguro: 9\n");
            }
        } else if (idade >= 25 && idade <= 40) { // idade >= 25 && idade <= 40
            if (grupo_risco == 'b') { // grupo de risco baixo
                printf("Codigo do seguro: 4\n");
            } else if (grupo_risco == 'm') { // grupo de risco medio
                printf("Codigo do seguro: 5\n");
            } else { // grupo de risco alto
                printf("Codigo do seguro: 6\n");
            }
        } else { // idade >= 41 && idade <= 70
            if (grupo_risco == 'b') { // grupo de risco baixo
                printf("Codigo do seguro: 1\n");
            } else if (grupo_risco == 'm') { // grupo de risco medio
                printf("Codigo do seguro: 2\n");
            } else { // grupo de risco alto
                printf("Codigo do seguro: 3\n");
            }
        }
    }
    return 0;
}