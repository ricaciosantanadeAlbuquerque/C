#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int x =0;
    printf("Digite um valor para come�ar !\n");
    scanf("%d",&x);

    if(x%2==0){
        x+=5; //x = x + 5;
    }else{
     x+=8; // x = x+ 8;
    }

    printf("O valor da opera��o � %d",x);



    return 0;
}
