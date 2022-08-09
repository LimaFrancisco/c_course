#include <stdio.h>
#include <math.h>

int main(){

	int cordenadaX, cordenadaY;

	printf("Informe as cordenadas X e Y: \n");
	scanf("%d %d", &cordenadaX, &cordenadaY);

	int distancia = sqrt(pow(cordenadaX, 2) +pow(cordenadaY, 2));

	printf("A distancia entre o ponto informada e a origem eh: %d\n", distancia);

	return 0;
}
