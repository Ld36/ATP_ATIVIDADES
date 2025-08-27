// 7) Faça um algoritmo que receba dois números, calcule e imprima um elevado ao outro.
#include <stdio.h>
#include <math.h> // Lib para calcular numeros elevados.

int main(){
	int base, expoente, resultado; // DECLARANDO VARIAVEIS
	
	printf("Envie a base para calcular: \n");
	scanf("%d", &base);
	
	printf("Envie o expoente para calcular: \n");
	scanf("%d", &expoente);
	
	resultado = pow(base, expoente);
	
	printf("Seu numero elevado e: %d\n", resultado);
	
	return 0;
}