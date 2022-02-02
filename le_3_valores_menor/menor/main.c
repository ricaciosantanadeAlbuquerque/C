#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
 int a,b,c;
 setlocale(LC_ALL,"portuguese");
 a =0;
 b=0;
 c=0;
 printf("Digite 3 valores por favor !\n");
 scanf("%d %d %d",&a,&b,&c);
   if(a+b<c){
    printf("\n Sim ! a+b = %d  e é menor do que  c = %d",(a+b),c);
    }

return 0;
}
