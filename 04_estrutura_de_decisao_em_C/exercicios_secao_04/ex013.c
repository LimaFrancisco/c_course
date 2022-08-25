//O programa deve pedir um as notas de tres provas calcular a media e retornar se o aluno foi aprovado

#include <stdio.h>

int main(){

	//Declaracao de variaveis
	float nota1, nota2, nota3, media;

	//Coleta de dados
	printf("Informe as tres notas do aluno:\n");
	scanf("%f %f %f", &nota1, &nota2, &nota3);

	//Processamento e retorno ao usuario
	
	media = (nota1 + nota2 + (nota3 * 2)) / 3;

	if(media >= 60){
		printf("Aprovado\n");
	}
	else{
		printf("Reprovado\n");
	}

	return 0;
}
