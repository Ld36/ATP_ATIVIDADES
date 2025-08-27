// 23) No momento, por conta da administração pública péssima e da corrupção em todos os setores 
// estatais, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. Faça um 
// algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o 
// desconto foi de 9%. 

#include <stdio.h>

int main() {
    double valor, novo_valor;
    printf("Digite o valor do produto: ");
    scanf("%lf", &valor);

    novo_valor = valor - (valor * 0.09); // Aplica o desconto de 9%
    printf("O novo valor com desconto e: %.2f\n", novo_valor); // Exibição do novo valor

    return 0;
}