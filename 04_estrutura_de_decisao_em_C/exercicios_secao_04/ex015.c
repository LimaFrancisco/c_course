/*
 O programa deve receber valores de 1 a 7 e retornar os dias da semana equivalentes
 */

#include <stdio.h>

int main(){

	//Declaracao de variaveis
	int valor;

	//Entrada de dados
	printf("Informe um valor de 1 a 7:\n");
	scanf("%d", &valor);

	//Processamento e saida de dados
	switch(valor){
		case 1:
			printf("Domingo\n");
			break;
		case 2:
			printf("Segunda\n");
			break;
		case 3:
			printf("Terca\n");
			break;
		case 4:
			printf("Quarta\n");
			break;
		case 5:
			printf("Quinta\n")
			break;
		case 6:
			printf("Sexta\n");
			break;
		case 7:
			printf("Sabado\n");
			break;
		case 8:
			printf("Valor Invalido\n");
	}


	return ;
}
