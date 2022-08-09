#include <stdio.h>

int main(){
	
	float comprimento, largura, preco;

	printf("Informe o comprimento e a largura do terreno e depois o preco da tela para a cerca: \n");
	scanf("%f %f %f", &comprimento, &largura, &preco);

	float custoCerca = (comprimento * largura) * preco;

	printf("O custo da cerca para este terreno eh:R$ %f\n", custoCerca);

	return 0;
}
