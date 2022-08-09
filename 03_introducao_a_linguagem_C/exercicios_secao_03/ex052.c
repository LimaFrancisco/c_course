#include <stdio.h>

int main(){

	float total, primeiraPessoa, segundaPessoa, terceiraPessoa;

	printf("Informe quanto cada uma das tres pressoas investiu: \n");
	scanf("%f %f %f", &primeiraPessoa, &segundaPessoa, &terceiraPessoa);

	total = primeiraPessoa + segundaPessoa + terceiraPessoa;

	printf("A primeira pessoa tem direito a %f porcento do premio.\n", (primeiraPessoa / total) * 100);
	printf("A segunda pessoa tem direito a %f porcento do premio. \n", (segundaPessoa / total) * 100);
	printf("A terceira pessoa tem direito a %f porcento do premio. \n", (terceiraPessoa / total) * 100);

	return 0;
}
