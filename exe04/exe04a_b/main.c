#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
int a,b,soma,mult;
soma =0; mult = 0;
a = 0;
b = 0;
printf("Digite o primeiro valor e o segundo valor \n");
scanf("%d %d",&a,&b);
if(a == b){
    soma = a + b ;
    printf("O valor da soma de %d e %d e = a %d",a,b,soma);
}else{
    mult =  a * b;
printf("O valor da multiplicacao %d e %d e = %d ",a,b,mult);

}



return 0;
}


