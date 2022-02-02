#include <stdio.h>
#include <stdlib.h>

int main()
{
   char conceito;
   printf("Digite o conceito  que vc da as aulas de algoritmo!! de [A] a [F]\n\n");
   scanf("%c",&conceito);
   switch(conceito){
   case 'A':
      printf("Excelente !\n");
     break;
   case 'B':
      printf("Otimo !!\n");
     break;
   case 'C':
       printf(" Bom!\n");
     break;
   case 'D':
       printf(" Regular!\n");
    break;
   case 'E':
       printf("Ruim!\n");
    break;
   case 'F':
       printf("Nos vemos de novo ano que vem!\n");
     break;
   default:
    printf("ERRO fora da faixa ! tente de novo !!\n");


   }
    return 0;
}
