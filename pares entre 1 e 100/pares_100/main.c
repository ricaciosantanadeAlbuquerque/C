#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 1;
    int par = 0;
    while(cont<=100){
        if(cont%2==0){
           printf("%d\n",cont);
        }
        cont++;
    }
    return 0;
}
