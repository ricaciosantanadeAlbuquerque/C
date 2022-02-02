#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    float num1 = 0;
    float num2 = 0;
    float soma =0;
    int x =0;
    float media = 0;
    char op[1];
    char op1 [1] = "s";
    int cont = 0;
    printf("Digite [s] para iniciar uma operação ou [x] para sair!\n");
     scanf("%s",&op);
      int a = strcmp(op,"s");
      if(x==a){
    while(op != "s"){
        soma =0;
        cont =0;
        while(cont<2){
        printf("Digite a nota a primeira nota !\n");
        scanf("%f",&num1);
        soma = soma +num1;
        cont++;

        }
        media = soma/cont;
        ;
        printf("A média é %2.f \n\n",media);
        printf("Digite [s] para iniciar uma operação ou [x] para sair!\n");
       scanf(" %s",&op);

    }

    }

    return 0;
  }



