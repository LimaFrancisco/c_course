/*O programa deve receber numero real que se for positivo deve retornar a raiz desse numero 
case nao for deve retornar o quadrado desse numero*/

#include <stdio.h>
#include <math.h>

int main(){
	
	//Declaracao de variaveis
	float valor;
	
	//Entrada de dados
	printf("Informe um numero real: \n");
	scanf("%f", &valor);
	
	//Processamento
	if(valor >= 0){
		printf("A raiz do numero eh: %f\n", sqrt(valor));
	}	
	else{
		printf("O quadrado do numero eh: %f\n", pow(valor, 2));
	}
	return 0;
}
