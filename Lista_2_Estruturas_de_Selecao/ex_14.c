// 14) Faça um programa que receba o código correspondente ao cargo de um funcionário e 
// imprima seu cargo e o percentual de aumento ao qual este funcionário tem direito seguindo 
// a tabela: 
// Código Cargo Percentual 
// 1 Escriturário  50,00% 
// 2 Secretário 35,00% 
// 3 Caixa 20,00% 
// 4 Gerente 10,00% 
// 5 Diretor Não tem aumento 

#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o codigo do cargo: ");
    scanf("%d", &codigo);

    switch (codigo) { // Estrutura de seleção switch
        case 1: // Caso o código seja 1
            printf("Cargo: Escriturario, Aumento: 50.00%%\n"); // Imprime o cargo e o percentual de aumento
            break;
        case 2: // Caso o código seja 2
            printf("Cargo: Secretario, Aumento: 35.00%%\n"); // Imprime o cargo e o percentual de aumento   
            break;
        case 3: // Caso o código seja 3
            printf("Cargo: Caixa, Aumento: 20.00%%\n"); // Imprime o cargo e o percentual de aumento
            break;
        case 4: // Caso o código seja 4
            printf("Cargo: Gerente, Aumento: 10.00%%\n"); // Imprime o cargo e o percentual de aumento
            break;
        case 5: // Caso o código seja 5
            printf("Cargo: Diretor, Aumento: Nao tem aumento\n");
            break;
        default: // Caso o código não corresponda a nenhum cargo
            printf("Codigo de cargo invalido.\n");
            break;
    }

    return 0;
}