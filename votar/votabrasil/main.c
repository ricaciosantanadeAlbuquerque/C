#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int idade,data =0;
    idade =0;
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

return 0;
}
