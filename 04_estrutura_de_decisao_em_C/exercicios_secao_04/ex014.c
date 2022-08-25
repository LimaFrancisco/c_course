//O programa deve pedir um as notas de tres provas calcular a media e retornar se o aluno foi aprovado

#include <stdio.h>

int main(){

	//Declaracao de variaveis
	float trabalho, avaliacao, exame, media;

	//Coleta de dados
	printf("Informe as tres notas do aluno que esteja entre 0 e 10:\n");
	scanf("%f %f %f", &trabalho, &exame, &media);

	//Processamento e retorno ao usuario
	
	media = ((trabalho * 2) + (avaliacao * 3) + (exame * 5)) / 3;

	if(media >= 0 && media <= 2.9){
		printf("Reprovado\n");
	}
	else if(media >= 3 && media <= 4.9){
		printf("Prova Final\n");
	}
	else if(media >= 5 && media <= 10){
		printf("Aprovado\n");
	}
	else{
		printf("Valores invalidos\n");
	}

	return 0;
}
