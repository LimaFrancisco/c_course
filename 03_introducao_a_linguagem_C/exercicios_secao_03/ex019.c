#include <stdio.h>

int main(){

   float litros;
   
   printf("Informe um volume em litros: \n");
   scanf("%f", &litros);

   float metrosCubicos = litros / 1000;

   printf("O volume informado convertido para metros cubicos eh: %f! \n", metrosCubicos);

   return 0;
}
