// 20) Uma determinada pessoa que trabalha com construção de piscinas precisa de um programa que 
//calcule o valor das construções solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem 
//o comprimento, a largura e a profundidade da piscina a ser construída. Leve em consideração que o 
// valor da construção é cobrado por m3 de água que a piscina conterá e o preço é de R$ 45.00 por m3. 

#include <stdio.h>

int main() {
    double comprimento, largura, profundidade;
    printf("Digite o comprimento da piscina: ");
    scanf("%lf", &comprimento);
    printf("Digite a largura da piscina: ");
    scanf("%lf", &largura);
    printf("Digite a profundidade da piscina: ");
    scanf("%lf", &profundidade);

    double volume = comprimento * largura * profundidade; // Cálculo do volume
    double valor = volume * 45.00; // Cálculo do valor da construção
    
    printf("O valor da construcao da piscina e: %.2f\n", valor);
    
    return 0;
}