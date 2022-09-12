//O programa deve pedir a idade do funcionario e quantos anos ele trabalhou e retornar se ele pode ou nao aposentar
#include <stdio.h>

int main(){

	//Declaracao de variaveis
	int idade, tempoTrabalho;

	//Entrada de dados
	printf("Informe a idade e o tempo de trabalho do funcionario:\n ");
	scanf("%d%d", &idade, &tempoTrabalho);

	//Processamento de dados
	if(idade >= 65){
		printf("Pode se aposentar por idade.\n");
	}
	else if(tempoTrabalho >= 30){
		printf("Pode se aposentar por tempo de servico.\n");
	}
	else if(idade >= 60 && tempoTrabalho >= 25){
		printf("Pode se aposentar.\n");
	}
	else{
		printf("Nao pode se aposentar.\n");
	}

	return 0;
}
