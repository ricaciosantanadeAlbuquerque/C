#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int A =0; int B =0; int C = 0;
    printf("Digite o primeiro valor !!\n");
    scanf("%d",&A);
    printf("Digite o segundo valor!!\n");
    scanf("%d",&B);
    if(A == B){
        C = A + B;
    }else{
       C = A*B;
    }
    printf("O resultado da operacao e %d ",C);
    return 0;
}
