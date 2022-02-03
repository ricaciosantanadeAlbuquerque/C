#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz [3][3];
    matriz[0][0] = 300;
    matriz [0][1] = 5;
    matriz [0][2] = 3;
    matriz [1][0] = 4;
    matriz [1][1] = 10;
    matriz [1][2] = 337;
    matriz [2][0] = 12;
    matriz [2][1] = 2;
    matriz [2][2] = 5;
    int i;
    int j;
    for(i = 0;i<3;i++){

        for(j=0;j<3;j++){

            printf("|%d - ",matriz[i][j]);

        }
        printf("|\n");
    }

    return 0;
}
