/*O programa deve pedir ao usuario dois numeros inteiros e retornar o maior dels e caso forem igual deve retornar "numero iguais"*/

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
	}
	else if(valorA == valorB){
		printf("O valores sao iguais\n");
	}
	else{
		printf("O maior entre os valores eh: %d\n", valorB);
	}

	return 0;
}
