#include <stdio.h>

int main(){

   int raio;

   printf("Informe o raio de uma circunferencia: "\n);
   scanf("%d", raio);

   int area = 3.141592 * (raio * raio);

   printf("A area do circulo informado eh: ", area);

   return 0;
}
