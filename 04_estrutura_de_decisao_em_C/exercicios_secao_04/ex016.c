/*
 O programa deve receber valores de 1 a 12 e retornar os meses do ano */

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
			printf("Janeiro\n");
			break;
		case 2:
			printf("Fevereiro\n");
			break;
		case 3:
			printf("Marco\n");
			break;
		case 4:
			printf("Abril\n");
			break;
		case 5:
			printf("Maio\n")
			break;
		case 6:
			printf("Junho\n");
			break;
		case 7:
			printf("Julho\n");
			break;
		case 8:
			printf("Agosto\n");
			break;
		case 9:
			printf("Setembro\n");
			break;
		case 10:
			printf("Outubro\n");
			break;
		case 11:
			printf("Novembro\n");
			break;
		case 12:
			printf("Dezembro\n");
			break;
		case 13:
			printf("Valor Invalido\n");
	}


	return ;
}
