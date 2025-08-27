// 21) Entrar via teclado com o valor de cinco produtos. Após as entradas, digitar um valor referente ao 
// pagamento da somatória destes valores. Calcular e exibir o troco que deverá ser devolvido. 

#include <stdio.h>

int main() {
    double p1, p2, p3, p4, p5, pagamento;
    printf("Digite o valor dos 5 produtos: ");
    scanf("%lf %lf %lf %lf %lf", &p1, &p2, &p3, &p4, &p5); // Leitura dos valores dos produtos
    printf("Digite o valor do pagamento: ");
    scanf("%lf", &pagamento);

    double total = p1 + p2 + p3 + p4 + p5; // Cálculo do total
    double troco = pagamento - total; // Cálculo do troco

    printf("O troco a ser devolvido e: %.2f\n", troco);
    
    return 0;
}