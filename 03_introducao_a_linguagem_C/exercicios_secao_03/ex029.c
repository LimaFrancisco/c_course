#include <stdio.h>

int main(){

   float nota1, nota2, nota3, nota4;

   printf("Informe as quatro notas do aluno: \n");
   scanf("%f %f %f %f ", &nota1, &nota2, &nota3, &nota4);

   float media = (nota1 + nota2 + nota3 + nota4) / 4;

   printf("A media do aluno eh : %f!\n", media);

   return 0;
}
