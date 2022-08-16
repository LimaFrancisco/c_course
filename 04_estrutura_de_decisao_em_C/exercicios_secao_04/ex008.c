/*O programa deve pedir ao usuario duas notas validas de um aluno e retornar a madia desse aluno caso as notas nao sejam validas informe ao usuario*/

#include <stdio.h>

int main(){

	//Declaracao de variaveis
	float notaA, notaB;

	//Entrada de dados
	printf("Informe duas notas validas de um aluno: \n");
	scanf("%f %f", &notaA, &notaB);

	//Processamento e saida de dados
	if(notaA >= 0.0 && notaA <= 10.0 && notaB >= 0.0 && notaB <= 10.0){
		printf("A media do aluno eh: %f\n", (notaA + notaB) / 2);
	}
	else{
		printf("Nota invalida\n");
	}

	return 0;
}
