#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    int num1;
    float nota1,nota2,nota3,mediaexe;
    float MA =0;
    char conceito = ' ';
    int cont=1;
    nota1 = 0; nota2 = 0; nota3 = 0; mediaexe = 0;
    setlocale(LC_ALL,"portuguese");
    printf("Digite seu n�mero de identifica��o \n");
    scanf("%d",&num1);
    if(num1 > 0){
        printf("AS NOTAS V�O DE 0 H� 100 EXEMPLO ( 0 10 20 30 40 > E <=100 !\n");
        printf("\nDigite sua primeira nota  exemplo(90) !!\n");
        scanf("%f",&nota1);
        printf("Digite a segunda nota !! \n");
        scanf("%f",&nota2);
        printf("Digite sua terceira nota !!\n");
        scanf("%f",&nota3);
        printf("Digite a m�dia dos exerc�cios !! \n");
        scanf("%f",&mediaexe);
        MA = (nota1+nota2*2+nota3*3+mediaexe)/7;
         if(MA>=90){
        conceito = 'A';

          printf("O aluno de n�mero %d \n",num1);
          printf(" Que possui as notas %2.f %2.f %2.f \n",nota1,nota2,nota3);
          printf("e a m�dia dos exerc�cios que � %2.f \n",mediaexe);
          printf(" Teve a m�dia de aproveitamento %2.f \n",MA);
          printf("  e est� Aprovado  com o conceito %c \n",conceito);

    }else if(MA>=75 && MA <90){
        conceito = 'B';
         printf("O aluno de n�mero %d \n",num1);
         printf(" Que possui as notas %2.f %2.f %2.f \n",nota1,nota2,nota3);
         printf("e a m�dia dos exerc�cios que � %2.f  \n",mediaexe);
         printf(" Teve a m�dia de aproveitamento %2.f \n",MA);
         printf("  e est� Aprovado com o conceito %c \n ",conceito);


    }else if(MA>=60 && MA<75){
     conceito = 'C';

         printf("O aluno de n�mero %d ",num1);
         printf(" Que possui as notas %2.f %2.f %2.f \n",nota1,nota2,nota3);
         printf("e a m�dia dos exerc�cios que � %2.f \n",mediaexe);
         printf(" Teve a m�dia de aproveitamento %2.f \n ",MA);
         printf("  e est� Aprovado com o conceito %c  \n",conceito);

    }else if(MA>=40 && MA<60){
       conceito = 'D';
        printf("O aluno de n�mero %d \n",num1);
         printf(" Que possui as notas %2.f %2.f %2.f\n",nota1,nota2,nota3);
         printf("e a m�dia dos exerc�cios que � %2.f \n",mediaexe);
         printf(" Teve a m�dia de aproveitamento %2.f \n",MA);
         printf(" e est� \" REPROVADO !\" com o conceito %c \n",conceito);
    }else{
     conceito ='E';
         printf("O aluno de n�mero %d \n",num1);
         printf(" Que possui as notas %2.f %2.f %2.f \n",nota1,nota2,nota3);
         printf("e a m�dia dos exerc�cios que � %2.f  \n",mediaexe);
         printf(" Teve a m�dia de aproveitamento %2.f \n ",MA);
         printf(" e est� \" REPROVADO !\" com o conceito %c  \n ",conceito);
    }


  }else{
  printf(" Por favor digite um n�mero  v�lido  \n \n!");

  }
  return 0;
}
