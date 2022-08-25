/*O programa deve verificar se o valor informado pelo usuario eh divisivel por 3 ou 5*/

#include <stdio.h>

int main(){

	//Declaracao de variaveis
	int flagMenu, valor;

	//Entrada de dados
	printf("Informe o valor equivalente a opcao desejada: \n1 - O numero eh divisivel por 3? \n2 - O numero eh divisilve por 5?\n");
	scanf("%d", &flagMenu);

	printf("Informe um valor inteiro qualquer: \n");
	scanf("%d", &valor);

	switch(flagMenu){
		case 1:
			if(valor % 3 == 0){
				printf("O valor %d eh divisivel por 3.\n", valor);
			}
			else{
				printf("O valor %d nao eh divisivel por 3.\n", valor);
			}
			break;
		case 2:
			if(valor % 5 == 0){
				printf("O valor %d eh divisivel por 5.\n", valor);
			}
			else{
				printf("O valor %d nao eh divisivel por 5\n.", valor);	
			}
			break;
		default:
			printf("Opcao nao disponivel\n");
	}
	
	return 0;
}
