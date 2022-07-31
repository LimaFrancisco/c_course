#include <stdio.h>

int main(){

   int num1, num2, num3, soma;

   printf("Informe 3 valores inteiros: \n");
   scanf("%d %d %d", &num1, &num2, &num3);

   soma = num1 + num2 + num3;

   printf("A soma dos 3 valores eh %d !\n", soma);

   return 0;
}
