#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1,nota2,nota3,media;
    int n1,n2,n3;
    n1 =0;
    n2=0;
    n3=0;
    nota1 = nota2 = nota3 = media =0;
    printf("Digite primeiro um numero e depois sua primeira nota !\n");
    scanf("%d%f",&n1,&nota1);
    printf("Digite primeiro um numero e depois sua segunda nota !\n");
    scanf("%d%f",&n2,&nota2);
    printf("Digite primeiro um numero e depois sua terceira nota !\n");
    scanf("%d%f",&n3,&nota3);
     media = (nota1+nota2+nota3)/3;
     printf("O numero e %d e Sua primeira nota e %1.f\n",n1,nota1);
     printf("O numero e %d e Sua segunda nota e %1.f\n",n2,nota2);
     printf("O numero e %d e Sua  terceira nota e %1.f\n",n3,nota3);
     printf("Sua media e %1.f",media);
   return 0;
}


