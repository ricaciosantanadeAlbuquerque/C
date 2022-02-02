#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 1;
    while(num1<=55){
        if(num1%2 != 0){
            printf("%d\n",num1);
        }
        num1++;
    }
    return 0;
}
