#include <stdio.h>

int main(){

	int anoNascimento, idade, anoAtual = 2022;

	printf("Em qual ano voce nasceu?\n");
	scanf("%d", &anoNascimento);

	idade = anoAtual - anoNascimento;

	printf("Voce tem ou fara ainda este ano, %d anos!\n", idade);


	return 0;
}
