#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

        int t = 0;
      char nome[10];
      char nome1[10];
    printf("Digite uma letra ");
    gets(nome);
    printf("%s\n",nome);
     printf("Digite uma letra ");
    gets(nome1);
    printf("\n%s\n",nome1);
 int ret = strcmp(nome,nome1);
 printf("\n%d\n",ret);

  if(ret == 0){
    printf("Digite o valor 1");
    scanf("%d",&t);
  }
  printf("%d",t);
    return 0;
}
