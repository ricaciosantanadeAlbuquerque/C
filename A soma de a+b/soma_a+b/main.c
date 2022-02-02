#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portugues");
   int A = 0;
   int B = 0;
   int C = 0;
     int soma = 0;
   printf(" Digite um valor para A \n");
   scanf("%d",&A);
   printf("Digite um valor para B \n");
   scanf("%d",&B);
   printf("Digite um valor para C \n");
   scanf("%d",&C);
   soma =  A+B;
   if(soma <C){
    printf("A soma de A + B  é menor que C %c \n",soma);
   }


    return 0;
}
