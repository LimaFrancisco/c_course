#include <stdio.h>

int main(){

	double alturaDegrau, alturaSubir;

	printf("Informe a altura do degrau e a altura que deseja subir(Tudo em centimetros):\n");
	scanf("%lf %lf", &alturaDegrau, &alturaSubir);

	int quantidadeDegraus = alturaSubir / alturaDegrau;

	printf("Voce precisa subir %d degraus para alcancar o objetivo: ", quantidadeDegraus);

	return 0;
}
