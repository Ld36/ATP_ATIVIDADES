#include <stdio.h>
#include <locale.h>

// 5) Faça um algoritmo que receba duas notas de um aluno e seus respectivos pesos, calcule e imprima a média ponderada dessas notas.

int main (void){
	setlocale(LC_ALL, "Portuguese"); // Apenas para acentuação.
	
	// Criei as variaveis para serem adicionado valores.
	float nota1, nota2, resultado;
	int peso1, peso2;
	
	
	// Solicita os Valores para serem armazenados.
	printf("Insira a primeira Nota do Aluno: \n");
	scanf("%f", &nota1);
	
	printf("Insira a segunda Nota do Aluno: \n");
	scanf("%f", &nota2);
	
	printf("Insira o peso da primeira nota : \n");
	scanf("%d", &peso1);
	
	printf("Insira o peso da primeira nota : \n");
	scanf("%d", &peso2);
	
	// calcula as notas com seu peso.	

	resultado = (peso1 * nota1 + peso2 * nota2) / (peso1 + peso2); 
	
	printf("A media ponderada é = %f\n", resultado);
	
	return 0;
}