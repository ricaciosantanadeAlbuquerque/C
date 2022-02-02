#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
 int idade = 0;
 printf("Digite sua idade \n");
 scanf("%d",&idade);
 if(idade<=17){
    printf("Voce e uma pessoa jovem !! \n");

 }else{
   if(idade>=60){
    printf("Voce e uma pessoa Idosa !! \n");
   }else{
    if((idade>17)&&(idade<60)){
        printf("Voce e uma pessoa a dulta !!");
    }
   }

 }



return 0;
}
