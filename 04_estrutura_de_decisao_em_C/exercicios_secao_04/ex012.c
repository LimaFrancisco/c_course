//O programa deve pedir um valor inteiro maior que zero e retornar o logaritmo desse valor e caso o valor for menor que zero retornar Numero invalido

#include <stdio.h>
#include <math.h>

int main(){

	//Declaracao de variaveis
	int valor;

	//Coleta de dados
	printf("Informe um valor inteiro que seja maior que zero:\n");
	scanf("%d", &valor);

	//Processamento e retorno ao usuario
	if(valor > 0){
		printf("O logaritmo do valor informado eh: %f\n", log10(valor));
	}
	else{
		printf("Numero invalido\n");
	}

	return 0;
}
