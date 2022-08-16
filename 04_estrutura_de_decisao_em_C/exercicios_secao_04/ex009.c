/*O programa deve ler o salario de funcionario e o valor de um emprestimo caso o valor do emprestimo for maior que 20% o programa deve retornar emprestimo negado caso contrario emprestimo altorizado*/

#include <stdio.h>

int main(){

	//Declaracao de variaveis
	float salario, emprestimo;

	//Entrada de dados
	printf("Informe o valos do salario do funcionario e o valor do emprestimo: \n");
	scanf("%f %f", &salario, &emprestimo);

	//Processamento e saida de dados
	if(emprestimo > (salario * 0.2)){
		printf("Emprestimo nao concedido\n");
	}
	else{
		printf("Emprestimo consedido\n");
	}

	return 0;
}
