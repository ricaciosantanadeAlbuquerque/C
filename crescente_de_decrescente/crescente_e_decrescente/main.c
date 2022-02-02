#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
    int maior,menor,meio;
int num1,num2,num3;// DECLARADAS
num1 =0; num2 =0 ; num3 = 0;// INICIALIZADAS
printf(" Digite 3 valores inteiros numericos \n");
scanf("%d %d %d",&num1,&num2,&num3);
 if((num1>=num2)&&(num1>=num3)){
  maior = num1;
  meio = num2;
  menor = num3;

 }else{
   if((num2>=num3 )&& (num2>=num1)){
    maior = num2;
    meio = num1;
    menor = num3;
   }else{
   if((num3>=num1)&& (num3>=num2)){
    maior = num3;
    meio = num2;
    menor = num1;
   }



   }
 }
     int aux = 0;
   if(menor>meio){
    aux = menor;
    menor= meio;
    meio = aux;
   }
 printf("O  maior valor: %d \n O valor do meio : %d\n O menor valor %d\n",maior,meio,menor);
return 0;
 }


