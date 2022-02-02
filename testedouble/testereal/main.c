#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a =0.0;
    double b =0.0;
     float soma =0;
    printf("digite um valor");
    scanf("%lf",&b);
    printf(" %lf \n",b);
    printf("digite um valor");
    scanf("%f",&a);
     soma =(float) a+b;
     printf("soma %f ",soma);
    return 0;
}
