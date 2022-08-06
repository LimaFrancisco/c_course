#include <stdio.h>

int main(){

	float salario;

	printf("Informe o salario do funcionario: \n");
	scanf("%f", &salario);

	float novoSalario = salario + (salario * 0.1);

	printf("O novo salario do funcionario eh: %f\n", novoSalario);

	return 0;

}
