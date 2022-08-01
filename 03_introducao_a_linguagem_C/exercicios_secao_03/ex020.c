#include <stdio.h>

int main(){

   float quilogramas;
   
   printf("Informe uma massa em quilogramas: \n");
   scanf("%f", &quilogramas);

   float libras = quilogramas / 0.45;

   printf("A massa informada convertida para libras eh: %f! \n", libras);

   return 0;
}
