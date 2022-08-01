#include <stdio.h>

int main(){

   float centimetros;
   
   printf("Informe um cumprimento em centimetros: \n");
   scanf("%f", &centimetros);

   float polegadas = centimetros / 2.54;

   printf("O cumprimento informado convertido para polegadas eh: %f! \n", polegadas);

   return 0;
}
