#include <stdio.h>

int main(){

	const float premio = 780.000;
	float primeiroGanhador, segundoGanhador, terceiroGanhador;

	primeiroGanhador = premio * 0.46;
	segundoGanhador = premio * 0.32;
	terceiroGanhador = premio * 0.22;
		
	printf("O primeiro ganhador recebeu: R$ %f \n", primeiroGanhador);
	printf("O segundo ganhador recebeu: R$ %f \n", segundoGanhador);
	printf("O terceiro ganhador recebeu: R$ %f \n", terceiroGanhador);

	return 0;
}
