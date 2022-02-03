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
    printf("Digite seu número de identificação \n");
    scanf("%d",&num1);
    if(num1 > 0){
        printf("AS NOTAS VÃO DE 0 HÁ 100 EXEMPLO ( 0 10 20 30 40 > E <=100 !\n");
        printf("\nDigite sua primeira nota  exemplo(90) !!\n");
        scanf("%f",&nota1);
        printf("Digite a segunda nota !! \n");
        scanf("%f",&nota2);
        printf("Digite sua terceira nota !!\n");
        scanf("%f",&nota3);
        printf("Digite a média dos exercícios !! \n");
        scanf("%f",&mediaexe);
        MA = (nota1+nota2*2+nota3*3+mediaexe)/7;
         if(MA>=90){
        conceito = 'A';

          printf("O aluno de número %d \n",num1);
          printf(" Que possui as notas %2.f %2.f %2.f \n",nota1,nota2,nota3);
          printf("e a média dos exercícios que é %2.f \n",mediaexe);
          printf(" Teve a média de aproveitamento %2.f \n",MA);
          printf("  e está Aprovado  com o conceito %c \n",conceito);

    }else if(MA>=75 && MA <90){
        conceito = 'B';
         printf("O aluno de número %d \n",num1);
         printf(" Que possui as notas %2.f %2.f %2.f \n",nota1,nota2,nota3);
         printf("e a média dos exercícios que é %2.f  \n",mediaexe);
         printf(" Teve a média de aproveitamento %2.f \n",MA);
         printf("  e está Aprovado com o conceito %c \n ",conceito);


    }else if(MA>=60 && MA<75){
     conceito = 'C';

         printf("O aluno de número %d ",num1);
         printf(" Que possui as notas %2.f %2.f %2.f \n",nota1,nota2,nota3);
         printf("e a média dos exercícios que é %2.f \n",mediaexe);
         printf(" Teve a média de aproveitamento %2.f \n ",MA);
         printf("  e está Aprovado com o conceito %c  \n",conceito);

    }else if(MA>=40 && MA<60){
       conceito = 'D';
        printf("O aluno de número %d \n",num1);
         printf(" Que possui as notas %2.f %2.f %2.f\n",nota1,nota2,nota3);
         printf("e a média dos exercícios que é %2.f \n",mediaexe);
         printf(" Teve a média de aproveitamento %2.f \n",MA);
         printf(" e está \" REPROVADO !\" com o conceito %c \n",conceito);
    }else{
     conceito ='E';
         printf("O aluno de número %d \n",num1);
         printf(" Que possui as notas %2.f %2.f %2.f \n",nota1,nota2,nota3);
         printf("e a média dos exercícios que é %2.f  \n",mediaexe);
         printf(" Teve a média de aproveitamento %2.f \n ",MA);
         printf(" e está \" REPROVADO !\" com o conceito %c  \n ",conceito);
    }


  }else{
  printf(" Por favor digite um número  válido  \n \n!");

  }
  return 0;
}
