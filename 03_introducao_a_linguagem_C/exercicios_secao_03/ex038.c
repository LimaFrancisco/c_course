#include <stdio.h>

int main(){
	
	float salario;

	printf("Infome o salario do funcionario: \n");
	scanf("%f", &salario);

	float aumento = salario + (salario + 0.25);

	printf("O novo salario do funcionario eh: %f\n", aumento);

	return 0;
}
