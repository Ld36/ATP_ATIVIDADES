// 27) O  que será impresso depois de executado o seguinte algoritmo: 
// a) num = 20 
// b) num = -3 
// c) num = 0 
// leia(num) 
// se num  > 0 então 
// quale = 'NUMERO POSITIVO' 
// senão 
// se num < 0 então 
// quale = 'NUMERO NEGATIVO' 
// senão 
// quale = 'zero'; 
// fim se; 
// fim se; 
// escreva(quale); 

#include <stdio.h>

int main() {
    int num;
    char* quale;

    printf("a) Entrada: 20\n"); // numero positivo
    num = 20; // numero positivo
    if (num > 0) { // numero positivo
        quale = "NUMERO POSITIVO";
    } else { // numero nao positivo
        if (num < 0) {
            quale = "NUMERO NEGATIVO";
        } else {
            quale = "zero";
        }
    }
    printf("Saida: %s\n", quale);

    printf("b) Entrada: -3\n");
    num = -3;
    if (num > 0) { // numero positivo
        quale = "NUMERO POSITIVO";
    } else { // numero nao positivo
        if (num < 0) { // numero negativo
            quale = "NUMERO NEGATIVO";
        } else {
            quale = "zero";
        }
    }
    printf("Saida: %s\n", quale);

    printf("c) Entrada: 0\n");
    num = 0;
    if (num > 0) {
        quale = "NUMERO POSITIVO";
    } else {
        if (num < 0) {
            quale = "NUMERO NEGATIVO";
        } else {
            quale = "zero";
        }
    }
    printf("Saida: %s\n", quale);

    return 0;
}