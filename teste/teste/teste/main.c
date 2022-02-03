#include <stdio.h>
#include <locale.h>
int main(){
    int cont = 0;
    int idade = 1;
    int soma = 0;
    char op = ' ';
    int maior_idade = 0;
    int menor_idade =999999999;
    do{

      printf("Digite a sua idade !\n\n");
      scanf(" %d",&idade);
        soma += idade;
        cont++;
        if(idade > maior_idade){
            maior_idade = idade;
        }
        if(idade < menor_idade){
            menor_idade = idade;
        }
    printf("\ndigite [1] para continuar e [0] para sair\n\n");
            scanf(" %c",&op);

    }while( op != '0');
    printf("A menor idade %d ",menor_idade);
    printf("A maior idade %d ",maior_idade);
    int media_Idade = soma / cont ;
    printf("A media das idades %d ",media_Idade);

    return 0;
}
