/*Programa que pede dois valoes e mostra qual eh o maior entre eles*/

#include <stdio.h>

int main(){
	
	//Declaracao de variaveis
	int valorA, valorB;

	//Entrada de dados
	printf("Informe dois valores inteiros: \n");
	scanf("%d%d", &valorA, &valorB);

	//Processamento
	if(valorA > valorB){
		printf("O maior valor eh: %d\n", valorA);
	}else{
		printf("O maior valor eh: %d\n", valorB);
	}

	return 0;
}
