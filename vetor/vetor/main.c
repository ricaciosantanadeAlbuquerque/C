#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor [10];
    float soma =0;
    int cont = 0;
    float media =0;

     for(int i= 0;i<10;i++){
    printf("Digite sua nota !\n");
    scanf("%f",&vetor[i]);
    soma += vetor[i];
    cont++;
    }
    printf("%d",cont);
    media =soma/cont;
    printf("A media e %2.f\n ",media);
    for(int j = 9; j>=0;j--){
        printf("\n%2.f\n",vetor[j]);
    }
    return 0;
}
