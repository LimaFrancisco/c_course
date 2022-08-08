#include <stdio.h>
#include <ctype.h>

int main(){

	char maiusculo;

	printf("Informe uma letra qualquer em caractere maiusculo: \n");
	scanf("%c", &maiusculo);

	char minusculo = tolower(maiusculo);

	printf("A letra informada em caractere minusculos fica: %c\n", minusculo);

	return 0;
}
