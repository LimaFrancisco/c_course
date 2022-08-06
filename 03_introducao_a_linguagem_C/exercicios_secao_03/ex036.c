#include <stdio.h>
#include <math.h>

int main(){

	double raio, altura;
	const double pi = 3.141592;

	printf("Informe o raio e a altura de um cilindro: \n");
	scanf("%lf %lf", &raio, &altura);

	double volumeCilindro = pi * pow(raio, 2) * altura;

	printf("O valume do cilindro eh: %lf \n", volumeCilindro);

	return 0;
}
