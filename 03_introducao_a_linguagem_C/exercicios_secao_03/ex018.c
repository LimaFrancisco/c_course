#include <stdio.h>

int main(){

   float metrosCubicos;
   
   printf("Informe um volume em metros cubicos: \n");
   scanf("%f", &metrosCubicos);

   float litros = metrosCubicos * 1000;

   printf("O volume informado convertido para litros eh: %f! \n", litros);

   return 0;
}
