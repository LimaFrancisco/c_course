//O programa deve receber um  ano e informar se ele bissexto ou nao 
#include <stdio.h>

int main(){

	//Declaracao de variaveis
	int ano;

	//Entrada de dados
	printf("Infome um ano: \n");
	scanf("%d", &ano);

	//Processamento e saida de dados
	if((ano % 4 == 0 || ano % 400 == 0) && ano % 100 != 0){
		printf("O ano informado eh bissexto.\n");
	}
	else{
		printf("O ano informado nao eh bissexto\n");
	}


	return 0;
}
