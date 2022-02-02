#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int num1 = 0; int d= 0;
    printf("Digite um valor para começar!! \n");
    scanf("%d",&num1);
    if(num1> 0){
        d = num1 * 2;
    }else if(num1 < 0){
          d = num1 * 3;
    }
    printf("O resultado desta o peração é %d \n",d);



    return 0;
}
