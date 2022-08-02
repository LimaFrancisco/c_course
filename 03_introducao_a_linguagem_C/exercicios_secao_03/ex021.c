#include <stdio.h>

int main(){

   float libras;
   
   printf("Informe uma massa em libras: \n");
   scanf("%f", &libras);

   float quilogramas = libras * 0.45;

   printf("A massa informada convertida para quilogramas eh: %f! \n", quilogramas);

   return 0;
}
