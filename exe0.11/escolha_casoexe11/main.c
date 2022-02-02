#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale (LC_ALL,"portuguese");
     float produto = 0.0;
    int op =0;
    float somaPro=0.0;
    float porcento=0.0;

    printf("===MENU===");
    printf("ESCOLHA UMA DAS OPÇÕES A BAIXO ! \n");
    printf("Digite [1] para pagamento à vista, dinheiro ou cheque com 10%%  de desconto ! \n");
    printf("Digite [2] para pagamento à vista com o cartão de credito, recebe 15%% de desconto !! \n ");
    printf("Digite [3] para pagamento em duas vezes,  o preço normal sem juros ! \n");
    printf("Digite [4] para pagamento em duas vezes, o preço normal mais 10%% de juros !\n");
    scanf("%d",&op);
    switch(op){
    case 1:
        printf("Digite o valor do produto por favor !! \n");
        scanf("%f",&produto);
        porcento = (produto*10)/100;
        somaPro = produto-porcento;
        printf("O valor do produto é %2.f, e com o desconto de 10%% \n",produto);
        printf("Sai a no valor de %2.f \n\n ",somaPro);
       break;
     case 2:
        printf("Digite o valor d produto por favor !! \n");
        scanf("%f",&produto);
        porcento = (produto*15)/100;
        somaPro = produto - porcento;
        printf("O valor do produto é %2.f$$, e com o desconto de 15%% sia à %2.f$$ \n",produto,somaPro);
        break;
    case 3:
        printf("Digite o valor do produto  por favor !!\n");
        scanf("%f",&produto);
        somaPro = produto/2;
        printf("O preço do produto é de %2.f$$, e parcelado em duas vezes fica de %2.f$$ \n",produto,somaPro);
        break;
    case 4:
        printf("Digite o valor do produto por favor ! \n");
        scanf("%f",&produto);
        porcento = (produto*10)/100;
        somaPro = (produto+porcento)/2;
        printf("O valor do produto é %2.f$$, e dividido em duas parcelas com mais 10%% de juros  \n",produto);
        printf("O valor final a pagar é %2.f$$\n",somaPro);
        break;
    default:
        printf("O valor digitado está fora da faixa !! \n");
    }
    return 0;
}
