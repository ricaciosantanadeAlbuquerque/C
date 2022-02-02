#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
 int cavalo =0;
 int total =0;
 const int FERRADURA = 4;
 cavalo = 0;

printf(" Digite o numero de cavalos comprados !!\n");
scanf("%d",&cavalo);
total = FERRADURA * cavalo;
printf("O numero de cavalos e <===%d===>eee o total de ferraduras necessarias sao <===%d===>\n",cavalo,total);

return 0;
}

