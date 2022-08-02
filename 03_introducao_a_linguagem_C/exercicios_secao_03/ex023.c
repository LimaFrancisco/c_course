#include <stdio.h>

int main(){

   float metros;
   
   printf("Informe um cumprimento em jardas: \n");
   scanf("%f", &metros);

   float jardas = metros / 0.45;

   printf("O cumprimento informado convertida para jardas eh: %f! \n", jardas);

   return 0;
}
