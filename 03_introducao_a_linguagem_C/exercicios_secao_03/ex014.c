#include <stdio.h>

int main(){

   float graus;
   const float pi = 3.14415;

   printf("Informe um angulo em graus: \n");
   scanf("%f", &graus);

   float radianos = graus * pi / 180;

   printf("O angulo informado convertido para radianos eh: %f! \n", radianos);

   return 0;
}
