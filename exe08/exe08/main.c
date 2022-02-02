#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int num1,num2,num3;
    int aux = 0;
    num1 =0; num2= 0; num3 = 0;
    int maior,meio,menor;
    maior = 0; meio =0; menor=0;
    printf(" Digite 3 valores inteiros quaisquer\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        maior = num1;
        meio = num2;
         menor = num3;
    }else if(num2>num1 && num2>num3){
        maior = num2;
         meio = num1;
          menor = num3;
    }if(num3>num1 && num3>num2){
        maior = num3;
   }
   if((num1<num3)&& (num1>num2)){
         meio = num1;
  }
   if(num2<num3 && num2<num1){
        menor = num2;
  }if(num2<num3 && num2>num1){
        meio = num2;
        menor= num1;
    }
  if(menor>meio){
     aux = menor;
    menor = meio;
    meio = aux;
  }


   printf("%d maior \n",maior);
   printf("%d meio \n",meio);
   printf("%d menor \n",menor);
    return 0;
}
