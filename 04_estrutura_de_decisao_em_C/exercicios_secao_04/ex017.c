/*
O programa dever calcular a area de um triangulo sendo que as bases deve ser maiores que 0
*/

#include <stdio.h>

int main(){
	
	//Declaracao de variaveis
	float baseMaior, baseMenor, altura, area;

	//Entrada de dados
	printf("Informe a base maior, base menor e altura do triangulo\n");
	scanf("%f%f%f", &baseMaior, &baseMenor, &altura);

	//Processamento e saida de dados
	
	area = ((baseMaior + baseMenor) * altura) / 2;

	if(baseMaior > 0 && baseMenor > 0){
		printf("Area = %f\n", area);
	}
	else{
		printf("Valores invalidos\n");
	}

	return 0;
}
