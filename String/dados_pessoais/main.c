#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    char nome [10];
    char sexo [1];
    int v =0;
      char status[20] = "casada";
    int v1 =0;
    int tempo = 0;
     char estado [20];
    printf("Digite seu nome  por favor !\n");
    gets(nome);
    printf(" olá %s  \n",nome);
    printf("Por favor digite seu sexo !\n");// NÃO É POSSSÍVEL LER DADOS DO TIPO CHAR DEPOIS DE LER VETOR  DE CHAR
    gets(sexo);

    printf("digite seu estaddo Civil ! \n");
    gets(estado);
    v = strcmp(sexo,"f");
    v1 = strncmp(estado,status,5);

     if( v == 0 && v1 == 0){
        printf("A quanto tempo está casada ?\n");
        scanf("%d",&tempo);

     }else{
      printf("Foi mal deu errado \n");

     }

     printf("do sexo %s e está  %s a %d anos \n",sexo,estado,tempo);

    return 0;
}

