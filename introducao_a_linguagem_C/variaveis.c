//Aula sobre variaveis

#include <stdio.h>

int main(){ //A chave delimita um bloco de codigo(inicio do bloco)
   //Declarando variavel do tipo inteiro 
   int idade;//O ponto e virgula finaliza um comando

   //Declarando e inicializando variaveis
   //int idade = 20;
   
   //Funcao para escrever algo na saida padrao(console)
   printf("Qual eh a sua idade?");

   //Receber dados 
   scanf("%d", &idade);

   //Imprimir os dados
   printf("A sua idade eh %d \n", idade);

   return 0;
}//Fim do bloco
