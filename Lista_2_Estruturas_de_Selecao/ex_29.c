// 29) Efetuar a leitura de quatro número e apresentar os números que são divisíveis por 2 e 3. 

#include <stdio.h>

int main() {
    int n1, n2, n3, n4;

    printf("Digite quatro numeros inteiros: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    printf("Numeros divisiveis por 2 e 3:\n"); // ou seja, divisiveis por 6

    if (n1 % 2 == 0 && n1 % 3 == 0) { // ou seja, divisiveis por 6
        printf("%d\n", n1);
    }
    if (n2 % 2 == 0 && n2 % 3 == 0) { // ou seja, divisiveis por 6
        printf("%d\n", n2);
    }
    if (n3 % 2 == 0 && n3 % 3 == 0) { // ou seja, divisiveis por 6 
        printf("%d\n", n3);
    }
    if (n4 % 2 == 0 && n4 % 3 == 0) { // ou seja, divisiveis por 6
        printf("%d\n", n4);
    }

    return 0;
}