#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){

  int data;

         data =0;
    int op = 0;
    int idade = 0;
    float num3 ,num4;
    num3 = num4 =0;
    float num1,num2,soma,cub,mult,div,media;
    num1 = 0;num2 =0; media = 0;
printf("=======CALCULADORA========\n");
printf("Digite [1] para calcular a Media !\n");
printf("Digite [2] para calcular o Cubo ! \n");
printf("Digite[3] para Saber se esta apto a tirar CNH! \n");
printf("Digite [4] para saber se tem idade para votar !\n");
printf("Digite [5]  SAI do programa !\n");
printf("===========================\n");
 scanf("%d",&op); // %I OU %D PARA INTEIRO
 if(op!= NULL){
    if(op>=1 && op <=5){
    switch(op){
     case 1:
         printf("Digite a primeira nota !\n");
         scanf("%f",&num1);
         printf("Digite a segunda nota !\n");
         scanf("%f",&num2);
         printf("Digite a terceira nota ! \n ");
         scanf("%f",&num3);
         printf("Digite a quarta nota ! \n");
         scanf("%f",&num4);
          media = (num1 + num2 + num3 + num4)/4;
           if(media >=7){
            printf("\nVoce esta aprovado com media %f \n",media);
           }else{
            if(( media >= 5)&& (media <=6)){
                printf("\nVoce esta em \"RECUPERACAO\" e tirou a media %f \n ",media);
            }else{

                printf("\n\t\tALUNO REPROVADO \n!!");

             }
           }

        break;
     case 2:
         printf("=== Por favor digite o primeiro valor ===\n ");
         scanf("%f",&num1);


         cub = num1 * num1 * num1;
         printf("O cubo do numero %f e %f \n\n",num1,cub);
        break;
     case 3:
            printf("Digite sua idade\n");
      scanf("%d",&idade);
       if(idade<18){
    printf("Nao pode tirar a carteira  vc e muito jovem!!\n");
     }else if((idade>=18) && (idade<=65)){
    printf("Voce pode tirar a carteira vc tem idade apropriada \n");

     }else{
        if( idade>65){
         printf(" vc  nao  esta na faixa que possa tirar a carteira\n ");
    }
}
        break;
     case 4:

      printf("==========VOTA BRASIL==========\n");
     printf("Digite sua data de nascimento !!\n");
    scanf("%d",&data);
   idade = 2021 - data;

     if((idade>=18) && (idade<=65)){
    printf("Voto o brigatorio !sua idade e %d\n",idade);
  }else if((idade>=16) && (idade<18)||(idade>65)){
     printf("Voto opicional idade %d \n",idade);
   }else{
     printf("Voce nao tem idade para votar %d \n",idade);
 }




        break;
     case 5:

        break;
     default:
        printf("opçao invalida !!");
        break;







    }
    }else{
     printf("O valor nao esta dentro da faixa\n");
    }
 }else{
     printf(" ERRO! valor nulo !\n");




 }
 return 0;
}










