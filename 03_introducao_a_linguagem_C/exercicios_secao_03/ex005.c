#include <stdio.h>

int main(){
   
   float num;

   printf("Informe o valor do tipo real: \n");
   scanf("%f", &num);

   float quintaParte = num / 5;

   printf("A quinta parte do valor informado eh %f!\n", quintaParte);

   return 0;
}
