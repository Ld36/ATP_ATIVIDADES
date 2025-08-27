// 8) Faça um algoritmo que receba o valor do salário de um funcionário e o valor do salário mínimo. Calcule e imprima quantos salários mínimos ganha esse funcionário.
#include <stdio.h>
#include <math.h> 

int main(){
	float salario_fun, salario_minimo; // DECLARANDO VARIAVEIS
	int resultados;
	
	
	printf("Envie o salario minimo atual: \n");
	scanf("%f", &salario_minimo);
	
	printf("envie seu salario atual: \n");
	scanf("%f", &salario_fun);
	
	resultados = salario_fun / salario_minimo;
	
	printf("Voce recebe%2.d salarios minimos.", resultados);
	
	return 0;
}