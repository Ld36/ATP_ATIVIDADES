#include <stdio.h>
#include <locale.h>

// 4) Faça um algoritmo que receba três notas de um aluno, calcule e imprima a média aritmética entre essas notas.

int main (void) {
	setlocale(LC_ALL, "Portuguese"); // Apenas para acentuação.
	// Criei as variaveis para serem adicionado valores.
	float nota1, nota2, nota3, resultado;
	
	// Solicita os Valores para serem armazenados.
	printf("Insira a primeira Nota do Aluno: \n");
	scanf("%f", &nota1);
	
	printf("Insira a segunda Nota do Aluno: \n");
	scanf("%f", &nota2);
	
	printf("Insira a terceira Nota do Aluno: \n");
	scanf("%f", &nota3);
	
	// calcula a media primeiro depois divide o valor total.
	resultado = (nota1 + nota2 + nota3) / 3; 
	
	printf("Sua Média é = %f\n", resultado);
	
	return 0;
}