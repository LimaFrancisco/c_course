#include <stdio.h>

int main(){

	double total;

	printf("Informe o valor total da compra: \n");
	scanf("%lf", &total);

	double desconto = total - (total * 0.05);
	double parcelas = total / 3;
	double comissaoComDesconto = desconto * 0.05;
	double comissaoSemDesconto = total * 0.05;

	printf("O total com o desconto eh: %lf \n", desconto);
	printf("O valor das parcelas eh: %lf \n", parcelas);
	printf("O valor da comissao com o desconto eh: %lf \n", comissaoComDesconto);
	printf("O valor da comissao sem o desconto eh: %lf \n", comissaoSemDesconto);

	return 0;
}
