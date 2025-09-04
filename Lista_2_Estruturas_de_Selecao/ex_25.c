// 25) Escreva um programa que calcule o que deve ser pago por um produto, considerando o 
// preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela 
// a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado: 
// Código 
// Condição de pagamento 
// 1 
// Á vista em dinheiro ou cheque, recebe 10% de desconto. 
// 2 
// À vista no cartão de crédito, recebe 5% de desconto. 
// 3 
// Em 2 vezes, preço normal de etiqueta sem juros. 
// 4 
// Em 3 vezes, preço normal de etiqueta mais juros de 10%.

#include <stdio.h>

int main() {
    float preco, preco_final;
    int codigo;

    printf("Digite o preco normal do produto: ");
    scanf("%f", &preco);
    printf("Digite o codigo de pagamento (1, 2, 3 ou 4): ");
    scanf("%d", &codigo);

    if (codigo == 1) { // À vista em dinheiro ou cheque
        preco_final = preco * 0.90; // 10% de desconto
        printf("Valor a vista em dinheiro ou cheque (10%% de desconto): %.2f\n", preco_final);
    } else if (codigo == 2) {
        preco_final = preco * 0.95; // 5% de desconto
        printf("Valor a vista no cartao de credito (5%% de desconto): %.2f\n", preco_final);
    } else if (codigo == 3) { // Em 2 vezes
        printf("Valor em 2x sem juros: %.2f\n", preco);
    } else if (codigo == 4) { // Em 3 vezes com juros de 10%
        preco_final = preco * 1.10; // 10% de juros
        printf("Valor em 3x com juros de 10%%: %.2f\n", preco_final);
    } else {
        printf("Codigo de pagamento invalido.\n");
    }

    return 0;
}