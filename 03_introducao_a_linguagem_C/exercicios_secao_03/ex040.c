#include <stdio.h>

int main(){

	float valorDia = 30.00;
	float dias;

	printf("Informe a quantidade de dias trabalhados pelo encanador: \n");
	scanf("%f", &dias);

	float valorAPagar = valorDia * dias - (0.8);

	printf("O total a pagar para o encanador eh: %f\n", valorAPagar);

	return 0;
}
