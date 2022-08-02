#include <stdio.h>

int main(){

   float hectares;
   
   printf("Informe uma area em hectares: \n");
   scanf("%f", &hectares);

   float metrosQuadrados = hectares * 10000;

   printf("A area informada convertida para metros quadrados eh: %f! \n", metrosQuadrados);

   return 0;
}
