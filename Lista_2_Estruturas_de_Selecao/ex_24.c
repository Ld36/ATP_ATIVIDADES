// 24) Escreva um programa que leia três valores inteiros e mostre-os em ordem crescente. 


#include <stdio.h>

int main() {
    int a, b, c;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c); // Lê três valores inteiros

    if (a > b) { // Troca a e b se a for maior que b
        int temp = a; // variável temporária para troca
        a = b;
        b = temp;
    }
    if (a > c) { // Troca a e c se a for maior que c
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) { // Troca b e c se b for maior que c
        int temp = b;
        b = c;
        c = temp;
    }
    
    printf("Valores em ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}