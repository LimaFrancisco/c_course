#include <stdio.h>

int main(){

   float metrosQuadrados;
   
   printf("Informe uma area em metros quadrados: \n");
   scanf("%f", &metrosQuadrados);

   float hectares = metrosQuadrados * 0.0001;

   printf("A area informada convertida para hectares eh: %f! \n", hectares);

   return 0;
}
