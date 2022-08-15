/*O programa deve receber um numero que se for positivo deve retornar a raiz desse numero 
e o quadrado do mesmo*/

#include <stdio.h>
#include <math.h>

int main(){
	
	//Declaracao de variaveis
	int valor;
	
	//Entrada de dados
	printf("Informe um numero real: \n");
	scanf("%d", &valor);
	
	//Processamento
	if(valor >= 0){
		printf("A raiz do numero eh: %f\n", sqrt(valor));
		printf("O quadrado do numero eh: %f\n", pow(valor2));
	}	
	else{
		printf("Onumero eh negativ...);
	}
	return 0;
}
