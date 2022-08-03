#include <stdio.h>

int main(){

   int num;

   printf("Informe um numero inteiro: \n");
   scanf("%d", &num);

   int result = ((num * 3) + 1) + ((num * 2) - 1);

   printf("A soma do sucessor do triplo com o antecessor do dobro do valor informado eh: %d\n"), result;

   return 0;
}
