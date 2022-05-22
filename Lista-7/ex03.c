#include<stdio.h>

float calcular(float x, float conversao) {
    return x*conversao;
}

int main() {
    int op;
    float x, conversao;
    do{
        printf("\nEscolha a moeda que sera convertida (1-Real ou 2-Dolar): ");
        scanf("%d",&op);
    }while(op!=1 && op!=2);
    do{
        printf("Digite o valor que sera convertido e a cotacao da moeda: ");
        scanf("%f%f",&x,&conversao);
    }while(x<0 || conversao<=0);
    if(op==1)
        printf("R$ %.2f = U$ %.2f",x,calcular(x,conversao));
    else
        printf("U$ %.2f = R$ %.2f",x,calcular(x,conversao));

    return 0;
}