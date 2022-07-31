#include <stdio.h>

int main(){

   float celsius;

   printf("Informe temperaturas em Celsius: \n");
   scanf("%f", &celsius);

   float kelvin = celsius + 273.15;

   printf("O valor da temperatuda em Celsius informado convertido para Kelvin eh %f!\n", kelvin);

   return 0;
}
