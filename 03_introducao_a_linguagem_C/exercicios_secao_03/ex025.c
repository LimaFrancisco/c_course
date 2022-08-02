#include <stdio.h>

int main(){

   float acres;
   
   printf("Informe uma area em acres: \n");
   scanf("%f", &acres);

   float metrosQuadrados = acres * 4048.58;

   printf("A area informada convertida para metrosQuadrados eh: %f! \n", metrosQuadrados);

   return 0;
}
