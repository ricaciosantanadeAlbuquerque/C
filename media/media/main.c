#include <stdio.h>
#include <stdlib.h>

int main()
{
 int nota1,nota2,nota3,media; // declaração
 nota1 =0;
 nota2 = 0;
 nota3 =0;
  media =0; // inicialização
   printf("Digite as 3  tres notas \n");
   scanf("%d %d %d",&nota1,&nota2,&nota3);/* O CÓDOGO IRÁ APRESENTAR ERRO SE FOR COLOCADO , ENTRE AS MASCARAS DE TIPO*/
   media = (nota1 + nota2 + nota3)/3;
   printf("\nSua primeira nota foi %d\n",nota1);
   printf("\nSua segunda nota foi %d\n", nota2);
   printf("\nSua terceira nota foi %d\n",nota3);
   printf("\nA sua media e %d\n",media);
   if(media>=7){
    printf("APROVADO %d!!",media);
   }else{
       printf("REPROVADO %d!!",media);
   }

return 0;
}
