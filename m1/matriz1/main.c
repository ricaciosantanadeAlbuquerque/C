#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet [3][3];
    int i =0;
    int j =0;

    for( i=0; i<3;i++){ // recebendo valores
        for(j=0;j<3;j++){
            printf("Digite um valor ");
           scanf("%d",&vet[i][j]);
        }
    }
    for( i=0; i<3;i++){
        for(j=0;j<3;j++){ // mostrando a diagonal principal
        if(i==j){
            printf("%d ",vet[i][j]);
        }else{
        vet[i][j] = 0;
        printf(" -%d- ",vet[i][j]);

        }

        }
        printf("\n");
    }
    return 0;
}
