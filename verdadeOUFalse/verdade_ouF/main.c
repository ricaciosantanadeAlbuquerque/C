#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    int maior =0;
    int num1,num2;
    num1 =0; num2 =0;
    setlocale(LC_ALL,"portuguese");
    printf("Para comparação digite  o maior valor aque !!\n");
    scanf("%d",&num1);
    printf("Digite agora o menor valor !!\n");
    scanf("%d",&num2);
    maior =  num1>num2;
    if(maior == 1){
        printf("Verdadeiro !! %d é maior que %d\n",num1,num2);
    }else{
    printf(" Falso  !! %d não é maior que %d \n",num1,num2);
    }
// ESTUDAR BOOLEAN!!
    return 0;
}
