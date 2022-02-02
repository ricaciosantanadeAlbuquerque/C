#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int idade = 0;
    printf("Digite a idade do nadador !");
    scanf("%d",&idade);
    if(idade>= 5 && idade<=7){
        printf("Infantil A !\n");
    }else if(idade>=8 && idade<=10){
      printf("Infantil B!\n");
    }else if(idade>=11 && idade<=13){
      printf("Juvenil A !\n");

    }else if(idade>=14 && idade<=17){
      printf("Juvenil B !\n");
    }else if(idade>17){
    printf("Senio maiores de 17 anos !!");
    }
    return 0;
}
