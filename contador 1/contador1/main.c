#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
 int contador = 0;
 int x = 0;
printf("Digite um valor para x \n");
scanf("%d",&x);
 while(contador <= x){

    printf("%d == %d\n",contador,(contador * x));
    contador++;
 }


return 0;
}
