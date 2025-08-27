// 10) Calcular e exibir a área de um quadrado a partir do valor de sua diagonal que será digitado. 

#include <stdio.h>
#include <math.h>

int main() {
    double diagonal; // DECLARAÇÃO DE VARIAVEIS.
    printf("Digite o valor da diagonal do quadrado: "); // SOLICITANDO ENTRADA
    scanf("%lf", &diagonal); // RECEBNDO VALOR DE DIAGONAL

    printf("A area do quadrado e: %.2f\n", (diagonal * diagonal) / 2);

    return 0;
}