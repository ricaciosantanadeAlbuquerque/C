#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char coletor1[15];
    char c = ' '; // DECLARAÇÃO E INICIALIZAÇÃO
    int retorno;
    int retorno1;
    char nome [25]; // STRING  VETOR DE CHAR DE 25 POSIÇÕES
    char estado_Civil[15];
    char sexo = ' ';
    printf("\nDigite um nome ! \n");
    gets(nome);
    printf("\nDigite seu estado civil?\n");
    gets(estado_Civil);
    printf("\n Digite seu estado civil novamente \n");
    gets(coletor1);
    printf("\n Digite  seu sexo, [M] para masculino  e [F]  feminino \n");
    scanf("%c",&sexo);
    printf("\nDigite novamente o seu sexo \n");
    scanf("%c ",&c);

   // scanf("%s",nome); // ERRO SE PRECIONAR ESPAÇO OU ENTER ELE TERMINA A LEITURA SM PEGAR O RESTO DO NOME
    printf("\nSeu nome: %s | estado civil: %s | sexo: %c \n\n",nome,estado_Civil,sexo);

    retorno = sexo == c; // COMPARAÇÃO DE CHAR  COM ==
    retorno1 = strcmp(estado_Civil,coletor1);// COMPARAÇÃO DE STRING STRCMP()
    printf("\n %d \n",retorno);
    printf("\n %d \n",retorno1);
     //  SE FOR IGUAL RETONA   0
     // SE  O VALOR  FOR MENOR AO COMPARADO RETORNA UM VALOR < 0
     // SE O VALOR FOR MAIOR DO QUE O COMPARADO  RETORNA UM VALOR > 0;
     int t = 0;

     if(retorno == 0 ){
          if(retorno1 == 0){
             printf("Digite o valor ");
             scanf("%d",&t); // ERRO  não faz a leitura do dado
             printf(" Seu tempo de casado  %d ",t);
       }
    }




    return 0;
}
