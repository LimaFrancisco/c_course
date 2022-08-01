#include <stdio.h>

int main(){

   float milhas;

   printf("Informe uma distancia em Milhas: \n");
   scanf("%f", &milhas);

   float quilometros = 1.61 * milhas;

   printf("A distancia informada em quilometros eh %f!\n", quilometros);

   return 0;
}
