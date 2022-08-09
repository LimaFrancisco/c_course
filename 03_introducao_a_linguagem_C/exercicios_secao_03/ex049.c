#include <stdio.h>

int main(){

	int segundos, minutos, horas, tempoSegundos;

	printf("Informe um horario, horas, minutos e segundos(nessa ordem): \n");
	scanf("%d %d %d", &horas, &minutos, &segundos);

	printf("Agora informe o tempo que levara o procedimento em segundo: \n");
	scanf("%d", &tempoSegundos);

	horas += tempoSegundos / 3600;

	minutos += (tempoSegundos % 3600) / 60;
	
	segundos += (tempoSegundos % 3600) % 60;

	printf("%d horas\n", horas);
	printf("%d minutos\n", minutos);
	printf("%d segundos\n", segundos);

	return 0;
}
