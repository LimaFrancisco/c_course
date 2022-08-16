/*O programa deve pedir a altura e o sexo de uma pessoa e retornar o peso ideal dessa pessoa*/

#include <stdio.h>

int main(){

	//Declaracao de variaveis
	float altura;
	char sexo;

	//Entrada de dados
	printf("Informe a altura e o sexo de uma pessoa: \n");
	scanf("%f %c", &altura, &sexo);

	//Processamento e saida de dados
	if(sexo == 'M' || sexo == 'm'){
		printf("O peso ideial eh: %f\n", (72.7 * altura) - 58);
	}
	else if(sexo == 'F' || sexo == 'f'){
		printf("O peso idela eh: %f\n", (62.1 * altura) - 44.7);
	}

	return 0;
}
