#include <stdio.h>

int main(){

   int num1, num2, num3;

   printf("Informe tres valores do tipo inteiro: \n");
   scanf("%d %d %d", &num1, &num2, &num3);

   int somaQuadrados = (num1 * num1) + (num2 * num2) + (num3 * num3);

   printf("A soma dos quadrados dos valores informados eh: %d! \n", somaQuadrados);

   return 0;
}
