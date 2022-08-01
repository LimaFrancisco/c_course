#include <stdio.h>

int main(){

   float polegadas;
   
   printf("Informe um cumprimento em polegadas: \n");
   scanf("%f", &polegadas);

   float centimetros = polegadas * 2.54;

   printf("O cumprimento informado convertido para centimetros eh: %f! \n", centimetros);

   return 0;
}
