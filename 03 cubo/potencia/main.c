#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
     //double num,potencia;
     int num,potencia;
     num =0;
     potencia = 0;
printf("\n Digite um valor !!\n");
scanf("%d",&num);
potencia = num * num * num;
printf("A potencia de %d elevado ao cubo e igual a %d ",num,potencia);
//printf("\n A potencia  de %1f elevado o cubo e  igual a %3.lf \n",num,potencia);
/* ao tentar formatar um valor float ele é arredondado*/

return 0;
}
