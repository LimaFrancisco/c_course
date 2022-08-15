/*O programa deve receber um numero e retornar se ele eh par ou impar*/

#include <stdio.h>
#include <math.h>

int main(){
	
	//declaracao de variaveis
	int valor;
	
	//entrada de dados
	printf("informe um numero real: \n");
	scanf("%d", &valor);
	
	//Processamento
	if(valor % 2 != 1){
		printf("O numero informado eh par!\n");
	}	
	else{
		printf("O numero informado eh impar!\n");
	}
	return 0;
}
