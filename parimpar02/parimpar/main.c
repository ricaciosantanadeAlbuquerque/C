#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>
int main(){
    int num1 =0;
 setlocale(LC_ALL,"portuguese");
printf("Digite um n�mero qualquer \n");
scanf("%d",&num1);
if(num1%2 == 0 ){
    printf("O valor � par %d \n ",num1);
}else{
printf("O valor � impar %d \n",num1);
}

return 0;
}
