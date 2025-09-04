// 28) verificar se dados três valores inteiros quaisquer os mesmo formam um triângulo. Se 
// formar informar o tipo, caso contrário, informar que os lados não formam um triângulo.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) { // verifica se forma triangulo
        if (a == b && b == c) { // verifica tipo de triangulo
            printf("Triangulo Equilatero\n");
        } else if (a == b || a == c || b == c) { // isosceles
            printf("Triangulo Isosceles\n");
        } else { // escaleno
            printf("Triangulo Escaleno\n");
        }
    } else {
        printf("Os lados nao formam um triangulo.\n");
    }

    return 0;
}