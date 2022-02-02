#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
int  num = 0;
int dobro=0,triplo =0;

printf("Digite um numero qualquer !\n");
scanf("%d",&num);
if(num>0){ //  NUMEROS ACIMA DE 0 SÃO POSITIVOS
    dobro = num * 2; // num + num
     printf("O dobro de %d e %d",num,dobro);
}else{
  if(num<0){ // A BAIXO  SÃO NEGATIVOS
    triplo = num * 3; // num + num + num
     printf("O triplo de de %d e %d",num,triplo);
  }

}



return 0 ;
}
