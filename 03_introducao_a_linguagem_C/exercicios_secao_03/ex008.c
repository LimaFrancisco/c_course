#include <stdio.h>

int main(){

   float kelvin;

   printf("Informe temperaturas em Kelvin: \n");
   scanf("%f", &kelvin);

   float celsius = kelvin - 273.15;

   printf("O valor da temperatuda em Kelvin informado convertido para Celsius eh %f!\n", celsius);

   return 0;
}
