#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//lista de algoritmo
int main(){
float area =0.0;
float base = 0.0;
float altura = 0.0;
printf("Digite a base  ou a largura !! \n");
scanf("%f",&base);
printf("Digite a altura ou o comprimento do terreno !!  \n");
scanf("%f",&altura);
area = base*altura;
printf(" A area do terreno e %f \n",area);
return 0;
}



