#include <stdio.h>

int main(){

	int segundos, minutos, horas;

	printf("Informe um valor referente a segundos: \n");
	scanf("%d", &segundos);

	horas = segundos / 3600;

	minutos = (segundos % 3600) / 60;
	
	segundos = (segundos % 3600) % 60;

	printf("%d horas\n", horas);
	printf("%d minutos\n", minutos);
	printf("%d segundos\n", segundos);

	return 0;
}
