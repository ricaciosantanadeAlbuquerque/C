#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    float alt = 0.0;
    float valorF=0.0;

    char sexo =' ';
   setlocale(LC_ALL,"portuguese");
   printf("Digite seu sexo !!\n");
   scanf("%c",&sexo);
   printf("Digite sua altura por favor ! \n ");
   scanf("%f",&alt);


   if(sexo == 'h'){
    valorF = (72.7*alt)-58;
    printf(" Voc� � homem � o seu peso ideal � %.2f ",valorF);

   }else{
    valorF = (62.1*alt)-44.7;
    printf("Voc� � mulher e seu peso ideal � %2.f ",valorF);
   }

    return 0;
}
