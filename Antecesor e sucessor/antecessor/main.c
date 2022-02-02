#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
   int num = 0;
   int soma = 0;
   int sub = 0;

   printf("\n Digite um numero \n  ");
   scanf("%d",&num);
   soma = ++num;
   sub =  --num - 1;//(:
   printf(" \nO sucessor de %d e %d e o antecessor  de %d e %d ",num,soma,num,sub);

return 0;
}
