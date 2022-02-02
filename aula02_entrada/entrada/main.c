#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int num1 =0;
    float num2 = 0.0;
    char letra = ' ';
printf(" Digite um numero inteiro, um numero real, e uma letra \n");
scanf("%d %f %c",&num1,&num2,&letra);
printf(" Inteiro: %d | Real: %f | caractere: %c ",num1,num2,letra);

return 0;
}
