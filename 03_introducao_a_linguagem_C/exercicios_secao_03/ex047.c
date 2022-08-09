#include <stdio.h>

int main(){

	int numeroLido;

	printf("Informe um numero inteiro de quatro digitos:\n");
	scanf("%d", &numeroLido);

	printf("%d\n", numeroLido / 1000);
	printf("%d\n", (numeroLido % 1000) / 100);
	printf("%d\n", ((numeroLido % 1000) % 100) / 10);
	printf("%d\n", ((numeroLido % 1000) % 100) % 10);

	return 0;
}
