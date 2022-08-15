/*Programa que pede um valor fornecido pelo usuario e se esse valor for positivo retorna a raiz 
 desse numero*/

#include <stdio.h>
#include <math.h> //Biblioteca para poder usar o metodo sqrt()

int main(){
	
	//Declaracao de variaveis
	int valor;

	//Entrada de dados
	printf("Informe um valor inteiro: \n");
	scanf("%d", &valor);

	//Processamento
	if(valor >= 0){
		float raiz = sqrt(valor);
		printf("A raiz quadrada do numero informado eh: %f\n", raiz);
	}
	else{
		printf("O valor eh invalido: %d\n");
	}

	return 0;
}
