#include <stdio.h>
#include <math.h>

int main(){

	double catetoA;
	double catetoB;

	printf("Infome o tamanho dos dois catetos: \n");
	scanf("%lf %lf", &catetoA, &catetoB);

	double hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2));

	printf("O valor da hipotenuza do triangulo eh: %lf \n", hipotenusa);


	return 0;
}
