#include <stdio.h>

int main(){

   float fahrenheint;

   printf("Informe temperaturas em Fahrenheit: \n");
   scanf("%f", &fahrenheint);

   float celsius = 5.0 * (fahrenheint - 32.0) / 9.0;

   printf("O valor da temperatuda em Fahrenheit informado convertido para Celsius eh %f!\n", celsius);

   return 0;
}
