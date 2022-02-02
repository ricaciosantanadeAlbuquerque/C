#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int num = 0;
    int soma =0;
    printf(" Digite um valor ");
    scanf("%d",&num);
    if(num%2 == 0){
      soma = num + 5;
        printf(" %d E par e o valor somado com 5 fica %d",num,soma);
    }else{
        if(num%2 == 1){
            soma = num + 8;
        printf(" %d E impar e o valor somado com 8 fica %d",num,soma);

        }
    }
    return 0;
}
