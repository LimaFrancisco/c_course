//O programa deve pedir um valor inteiro maior que zero e depois retornar a soma dos algarismos desse valor e caso o valor for menor que zero retornar Numero invalido

#include <stdio.h>

int main(){

	//Declaracao de variaveis
	int valor;

	//Coleta de dados
	printf("Informe um valor inteiro que seja maior que zero:\n");
	scanf("%d", &valor);

	//Processamento e retorno ao usuario
	if(valor > 0){
		if(valor < 10){
			printf("%d\n", valor);
		}
		else if(valor > 9 && valor < 100){
			printf("%d\n", (valor % 10) + (valor / 10));
		}
		else if(valor > 99 && valor < 1000){
			printf("%d\n", (valor / 100) + ((valor % 100 - (((valor % 100) % 10))) / 10) + (valor % 100) % 10);
		}
	}
	else{
		printf("Numero invalido\n");
	}

	return 0;
}
