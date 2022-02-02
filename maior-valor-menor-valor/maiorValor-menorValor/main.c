
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1,num2,num3;
    int aux = 1000;
    int maior= 0;
    int menor=0;
    printf("Digite 3 valores ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if((num1>num2)&&(num1>num3)){
        maior = num1;
        menor = num3;

    }else{
        if((num2>num1)&&(num2>num3)){
                maior = num2;
                menor = num1;
        }else{
        if((num3>num1)&&(num3>num2)){
           if(num2<num1){
             maior = num3;
            menor = num2;
           }else if(num1<num2){
                maior = num3;
            menor = num1;
           }

        }

        }
    }
  if(num1 <menor){
    aux = num1;
    num1 = menor;
    menor = aux;
  }else{
   if(num2 <menor){
    aux = num2;
    num2 = menor;
    menor = aux;
  }else{
  if(num3 <menor){
    aux = num3;
    num3 = menor;
    menor = aux;

  }
printf("O maior valor : %d\n",maior);
printf("O menor valor: %d \n",menor);

return 0;
}
  }
}




