// 9) Faça um algoritmo que calcule e imprima a área das seguintes figuras geométricas: • triângulo; quadrado; círculo; trapézio; retângulo; losango. 
#include <stdio.h>
#include <math.h> 

// FORMULAS PARA CALCULOS DAS AREAS DAS FIGURAS GEOMETRICAS.
//quadrado = lado x lado = area        						r1              
//triangulo = (base x altura) / 2  	   						r2
//retangulo = base x altura            						r3
//losangulo = (diagonal_maior x diagonal_menor) / 2			r4
//trapezio = (base_maior + base_menor x alturaTra) / 2,		r5
//circulo = M_PI * RAIO * RAIO								r6

 int main(){
	int ladoQua, baseTri, alturaTri, baseRet, alturaRet, diagonalMaior, diagonalMenor, baseMaior, baseMenor, alturaTra, raioCir;
	int r1, r2, r3, r4, r5, r6; // VARIAVEIS QUE VAO SER ARMAZENADAS OS RESULTADOS DOS CALCULOS.
	
	
	printf("INFORME O VALOR DO LADO DO QUADRADO: \n");
	scanf("%d", &ladoQua);
	
	printf("INFORME A BASE DO TRIANGULO: \n");
	scanf("%d", &baseTri);
	printf("INFORME A ALTURA DO TRIANGULO: \n"); 
	scanf("%d", &alturaTri);
	
	printf("INFORME A BASE DO RETANGULO: \n");
	scanf("%d", &baseRet);
	printf("INFORME A ALTURA DO RETANGULO: \n");
	scanf("%d", &alturaRet);
	
	printf("INFORME A DIAGONAL MAIOR DO LOSANGULO: \n");
	scanf("%d", &diagonalMaior);
	printf("INFORME A DIAGONAL MENOR DO LOSANGULO: \n");
	scanf("%d", &diagonalMenor);
	
	printf("INFORME A BASE MAIOR DO TRAPEZIO: \n");
	scanf("%d", &baseMaior);
	printf("INFORME A BASE MENOR DO TRAPEZIO: \n");
	scanf("%d", &baseMenor);
	printf("INFORME A ALTURA DO TRAPEZIO: \n");
	scanf("%d", &alturaTra);
	
	printf("INFORME O RAIO DO CIRCULO: \n");
	scanf("%d", &raioCir);

	r1 = ladoQua * ladoQua;
	r2 = (baseTri * alturaTri) / 2;
	r3 = baseRet * alturaRet;
	r4 = (diagonalMaior * diagonalMenor) / 2;
	r5 = (baseMaior + baseMenor) * alturaTra / 2;
	r6 = M_PI * raioCir * raioCir; // M_PI constante que representa o numero de PI, pode ser apenas substituida por 3,14.
	
	printf("AREA DO SEU QUADRADO E: %d\n", r1);
	printf("AREA DO SEU TRIANGULO E: %d\n", r2);
	printf("AREA DO SEU RETANGULO E: %d\n", r3);	
	printf("AREA DO SEU LOSANGULO E: %d\n", r4);	
	printf("AREA DO SEU TRAPEZIO E: %d\n", r5);	
	printf("AREA DO SEU CIRCULO E: %d\n", r6);	

	
	return 0;
}