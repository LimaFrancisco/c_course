#include <stdio.h>

int main(){

   float metrosQuadrados;
   
   printf("Informe uma area em metros quadrados: \n");
   scanf("%f", &metrosQuadrados);

   float acres = metrosQuadrados * 0.000247;

   printf("A area informada convertida para acres eh: %f! \n", acres);

   return 0;
}
