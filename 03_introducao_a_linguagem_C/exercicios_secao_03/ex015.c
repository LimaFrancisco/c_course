#include <stdio.h>

int main(){

   float radianos;
   const float pi = 3.14415;

   printf("Informe um angulo em radianos: \n");
   scanf("%f", &radianos);

   float graus = radianos * 180 / pi;

   printf("O angulo informado convertido para graus eh: %f! \n", graus);

   return 0;
}
