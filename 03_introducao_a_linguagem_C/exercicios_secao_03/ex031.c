#include <stdio.h>

int main(){

   int num;

   printf("Informe um valor inteiro: \n");
   scanf("%d", &num);

   int antecessor = num - 1;
   int sucessor = num + 1;

   printf("O antecessor do numero informado eh: %d \n", antecessor);
   printf("O sucessor do numero informado eh: %d \n", sucessor);

   return 0;
}
