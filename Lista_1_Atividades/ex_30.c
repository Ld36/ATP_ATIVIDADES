// 30) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do 
// distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e depois a 
// percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor seja de 28% 
// e os impostos 45%. Escrever um algoritmo que leia o custo de fábrica de um carro e informe o custo ao 
// consumidor do mesmo.

#include <stdio.h>

int main() {
    double custo_fabrica;
    printf("Digite o custo de fabrica do carro: ");
    scanf("%lf", &custo_fabrica);

    double custo_com_impostos = custo_fabrica * 1.45; // Aplicando impostos
    double custo_consumidor = custo_com_impostos * 1.28; // Aplicando percentual do distribuidor

    printf("O custo ao consumidor e: %.2f\n", custo_consumidor); // Exibindo custo ao consumidor

    return 0;
}