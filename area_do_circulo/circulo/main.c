#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    float area = 0;
 const float PIR  = 3.14; // CONSTANTE !!
 float raio = 0;
printf("Digite um  para o raio do circulo \n");
scanf("%f",&raio);
area = PIR*(raio*raio);//  == raio * raio e igual a raio ao quadrado
printf("\n A area desse circulo e %f\n",area); //  AO TENTAR FORMATA O NUMERO ELE É ARREDONDADO;

return 0;
}
