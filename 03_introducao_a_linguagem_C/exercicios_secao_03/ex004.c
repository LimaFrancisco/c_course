#include <stdio.h>

int main(){
   float num;

   printf("Informe um valor do tipo real: \n");
   scanf("%f", &num);

   float quadrado = num * num;

   printf("O quadrado do valor informado eh %f!\n", quadrado);

   return 0;
}
