#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
      float celsi,fahre;
      printf(" Digite a temperatura em graus celsius \n");
      scanf("%f",&celsi);
      fahre = (celsi*1.8)+32;
      printf("%1.f celsius  convertido para farenheit fica %f \n",celsi,fahre);
    return 0;
}
