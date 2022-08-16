//O programa deve pedir ao usuario dois numeros inteiros e retornar o maior dels e a diferenca entre eles

#include <stdio.h>

int main(){

	//Declaracao de variaveis
	int valorA, valorB;

	//Entrada de dados
	printf("Informe um dois numeros inteiros: \n");
	scanf("%d %d", &valorA, &valorB);

	//Processamento e saida de dados
	if(valorA > valorB){
		printf("O maior entre os valores eh: %d\n", valorA);
		printf("A diferencas entre os valores eh: %d\n", valorA - valorB);
	}
	else{
		printf("O maior entre os valores eh: %d\n", valorB);
		printf("A diferenca entre os valores eh: %d\n", valorB - valorA);;
	}

	return 0;
}
