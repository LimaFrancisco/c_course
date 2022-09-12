//O programa deve mostra um menu na tela com quatro operacoes e aplicar a opecacao escolhida pelo usuarionos valores inseridos caso a operacao for invalida o programa deve retornar uma tela de erro
#include <stdio.h>

int main(){

	//Decclaracao de variaveis
	int valor1, valor2, inputMenu;

	//Entrada de dados
	printf("Informe dois valores inteiros: \n");
	scanf("%d%d", &valor1, &valor2);

	printf("Escolha a opcao:\n1- Soma de 2 numeros.\n2- Diferenca entre dois numeros (maior pelo menor)\n3- Produto entre 2 numeros.\n4- Divisao entre 2 numeros (o denominador nao pode ser zero)\n") ;
	scanf("%d", &inputMenu);

	//Processamento e saida de dados
	switch(inputMenu){
		case 1:
			printf("O resultado da soma eh: %d\n", valor1 + valor2);
			break;
		case 2:
			if(valor1 >= valor2){
				printf("O resltado da subtracao eh: %d\n", valor1 - valor2);
			}
			else{
				printf("O resultado da subtrcao eh: %d\n", valor2 - valor1);
			}
			break;
		case 3:
			printf("O produto entre os dois numeros eh: %d\n", valor1 * valor2);
			break;
		case 4:
			if(valor2 > 0){
				printf("O resultado da divisao entre os dois numeros eh: %d\n", valor1 / valor2);
			}
			break;
		default:
			printf("Valor invalido\n");
			break;
	}

	return 0;
}
