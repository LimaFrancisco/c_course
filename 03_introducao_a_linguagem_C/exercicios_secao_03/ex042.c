#include <stdio.h>

int main(){

	float salario;

	printf("Informe o salario base do funcionario: \n");
	scanf("%f", &salario);

	float salarioFinal = salario + (salario * 0.5) - (salario * 0.7);

	printf("O salario a receber do funcionario eh: %f\n", salarioFinal);

	return 0;
}
