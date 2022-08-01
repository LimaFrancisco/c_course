#include <stdio.h>

int main(){

   float quilometros;

   printf("Informe uma distancia em Quilometros: \n");
   scanf("%f", &quilometros);

   float milhas = quilometros / 1.61;

   printf("A distancia informada em milhas eh %f!\n", milhas);

   return 0;
}
