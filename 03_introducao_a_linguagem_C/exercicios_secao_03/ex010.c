#include <stdio.h>

int main(){

   float quilometrosHora;

   printf("Informe uma velocidade em km/h: ");
   scanf("%f", &quilometrosHora);

   float metrosSegundo = quilometrosHora / 3.6;

   printf("A velocidade informada convertida para m/s eh %f!\n", metrosSegundo);

   return 0;
}
