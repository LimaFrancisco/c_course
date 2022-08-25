/*
O programa deve mostrar ao usuario um menu com opcao de 4 operacoes matematicas e depois pedir dois valores inteiros e aplicar a operacao escolhida nos dois valores informados
 */

#include <stdio.h>

int main(){

	//Declaracao de variaveis
	int flagMenu, valor1, valor2;

	//Entrada de dados
	printf("Informe dois valores inteiros para realizar a operacao desejada: \n");
	scanf("%d%d", &valor1, &valor2);

	printf("Informe um numero equivalente a operacao desejada: \n1 - Soma \n2 - Subtracao \n3 - Multiplicacao \n4 - Divisao \n");
	scanf("%d", &flagMenu);

	switch(flagMenu){
		case 1:
			printf("A soma entre os valores eh %d\n", valor1 + valor2);
			break;
		case 2:
			printf("A subtracao entre os valores eh %d\n", valor1 - valor2);
			break;
		case 3:
			printf("A multiplicacao entre os valores eh %d\n", valor1 * valor2);
			break;
		case 4:
			printf("A divisao entre os valores eh %d\n", valor1 / valor2);
			break;
		default:
		printf("A opcao desejada nao se encontra neste menu!\n");
	}

	return 0;
}
