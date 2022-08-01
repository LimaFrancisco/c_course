#include <stdio.h>

int main(){

   float metrosSegundos;

   printf("Informe a velocidade em m/s: \n");
   scanf("%f", &metrosSegundos);

   float quilometrosHora = metrosSegundos * 3.6;

   printf("O valor informado em k/h eh %f!\n", quilometrosHora);

   return 0;
}
