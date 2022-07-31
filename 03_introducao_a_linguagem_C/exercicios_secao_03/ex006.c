#include <stdio.h>

int main(){

   float celsius;

   printf("Informe temperaturas em Celsius: \n");
   scanf("%f", &celsius);

   float fahrenheit = celsius * (9.0 / 5.0) + 32.0;

   printf("O valor da temperatuda em Celsius informado convertido para Fahrenheint eh %f!\n", fahrenheit);

   return 0;
}
