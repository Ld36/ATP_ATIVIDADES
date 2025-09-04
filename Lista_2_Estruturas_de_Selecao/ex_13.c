// 13) Faça um programa que receba a idade de uma pessoa e classifique-a seguindo o critério 
// a seguir: 
// idade            Classificação 
// 0 a 2 anos        Recém-nascido 
// 3 a 11 anos       criança 
// 12 a 19 anos      adolescente 
// 20 a 55 anos      adulto 
// Acima de 55 anos  idoso

#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 2) { // Recém-nascido
        printf("Classificacao: Recem-nascido\n");
    } else if (idade >= 3 && idade <= 11) { // criança
        printf("Classificacao: crianca\n");
    } else if (idade >= 12 && idade <= 19) { // adolescente
        printf("Classificacao: adolescente\n");
    } else if (idade >= 20 && idade <= 55) { // adulto
        printf("Classificacao: adulto\n");
    } else { // idoso
        printf("Classificacao: idoso\n");
    }

    return 0;
}