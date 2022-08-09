#include <stdio.h>

int main(){

	int numeroLido;

	printf("Informe um numero inteiro de tres digitos: \n");
	scanf("%d", &numeroLido);

	int numeroGerado = ((numeroLido - (numeroLido % 100)) / 100) + ((numeroLido % 100) - ((numeroLido % 100) - (((numeroLido % 100) - (numeroLido % 100) % 10)))) + (100 * ((numeroLido % 100) % 10));

	printf("O numero lido invertido eh: %d\n", numeroGerado);

	return 0;
}
