#include <stdio.h>

int main(){

   float real;

   printf("Informe o valor monetario em real: \n");
   scanf("%f", &real);

   float dolar = real * 5.25;

   printf("O valor informado em dolar eh: %f!\n", dolar);

   return 0;
}
