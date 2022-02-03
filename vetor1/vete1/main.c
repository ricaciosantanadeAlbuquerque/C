#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vert [10];
    int vetimpar [10];


    for(int i =0; i<10;i++){
            printf("Digite um numero\n");
            scanf("%d",&vert[i]);

            if(vert[i]%2 != 0){
                vetimpar[i] = vert[i];


            }

    }
    vetimpar [10];
    for(int j =0;j<10;j++){
        printf("\nvalores impares >>>>>%d<<<<<<\n",vetimpar[j]);
    }


    return 0;
}
