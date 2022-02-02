#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
int main(){
float peso =0;
float imc =0;
float altura = 0;
setlocale(LC_ALL,"portuguese");

//QUANDO ESTIVER UTILIZANDO A CLASSE <LOCALE.H>, AO DIGITAR  UM NÚMERO FRACIONADO NO CONSOLE UTILIZE A VIRGULA !!!!!
// POIS OPADRÃO AGORA É LATINO.

printf("Digite o seu peso por favor! \n");
scanf(" %f",&peso);

printf("Digite sua altura por favor !\n");
scanf(" %f",&altura);

 imc = peso/(altura*altura);


 if(imc<18.5){
    printf("Você está a baixo do peso ideal! %2.f \n",imc);
 }else if(imc>=18.5 && imc<25){
    printf("Você está com o peso NORMAL! %2.f \n",imc);
 }else if(imc>=25 && imc<30){
   printf("Você está acima do peso %2.f! \n",imc);
 }else if(imc>30){
    printf("você está obeso !! cuidado %2.f \n",imc);
 }

return 0;
}
