#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
 /*signed -> utiliza variáveis com sinal + e sinal -;
   unsigned -> utiliza variáveis apenas positivas +
   long -> aumenta a capacidade de armazenamento da variável
   short -> diminui a capacidade de armazenamento da memmoria
   =====================================
   tipos primitivos
    char
    int
    float
    double
    void
 */
   unsigned short int a = 0;
  unsigned  long int b = 0 ;
// long float c =0; // NAO PODE ERRO
float y;
double x;
   printf("%d\n",sizeof(a));
   printf("%d\n",sizeof(b));
   //printf("%f",sizeof(c));
   printf("%f\n",sizeof(y));
   printf("%f",sizeof(x));





return 0;
}
