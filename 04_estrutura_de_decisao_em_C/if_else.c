# include <stdio>

int main(){
	//Declaracao de variaveis
	int idade;

	//Entrada
	printf("Qual eh a sua idade? \n");
	scanf("%d", &idade);

	//Processamento
	if(idade < 18){
		printf("Voce eh menor de idade. \n");
	}else if(idade > 18 && idade < 60){
		printf("Voce eh maior de idade. \n");
	}else{
		printf("Voce eh idoso. \n");
	}

	//Saida
	printf("A sua idade eh: %d", idade);

	return 0;
}
