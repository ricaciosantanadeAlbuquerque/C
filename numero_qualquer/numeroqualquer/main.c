#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include  <string.h>

int main()
{
    int num = 0;
    printf("Digite um numero qualquer \n");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("E PAR !! \n");
    }else{
    printf(" E IMPAR !!! \n");
    }

    return 0;
}
