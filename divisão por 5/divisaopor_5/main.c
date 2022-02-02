#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num =0;
    printf("Digite um numero ");
    scanf("%d",&num);
    if(num%5==0){
        printf("E divisivel por 5 %d\n",num);

    }else{
     printf("Nao e divisivel por 5 %d\n",num);

    }
}
