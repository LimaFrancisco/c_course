#include <stdio.h>

int main(){

	float preco;

	printf("Informe o valor de um produto: \n");
	scanf("%f", &preco);

	float desconto = preco - (preco * 0.12);

	printf("O novo valor do produto eh: %f \n", desconto);

	return 0;
}
