/*
 O programa deve pedir os tres lados de um triangulo varificar se eh possivel criar um triangulo case for possivel retornar o tipo do triangulo
 */

#include <stdio.h>

int main(){

	//Declaracao de variaveis
	float ladoA, ladoB, ladoC;

	//Entrada de dados
	printf("Informe os tres lados de um triangulo: \n");
	scanf("%f%f%f", &ladoA, &ladoB, &ladoC);
	
	//Processamento e saida de dados
	if((ladoA + ladoB) > ladoC && (ladoA + ladoC) > ladoB && (ladoB + ladoC) > ladoA){
		if(ladoA == ladoB == ladoC){
			printf("Triangulo equilatero\n");
		}
		else if(ladoA == ladoB || ladoB == ladoC || ladoA == ladoC){
			printf("Triangulo isosceles\n");
		}
		else if(ladoA != ladoB && ladoB != ladoC && ladoC != ladoA){
			printf("Triangulo escaleno\n");
		}
	}
	else{
		printf("Nao eh um triangulo...\n");
	}
	return 0;
}
