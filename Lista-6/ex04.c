#include<stdio.h>

int main() {
    int idade, i, qtdmaisde50=0;
    float altura, medh, maiorh=0;
    for(i=1;i<=4;i++) {
        do{
            printf("\n(Pessoa %d) Digite sua idade: ",i);
            scanf("%d",&idade);
        }while(idade<0);
        do{
            printf("(Pessoa %d) Digite sua altura: ",i);
            scanf("%f",&altura);
        }while(altura<0);
        if(idade>50)
            qtdmaisde50++;
        else if(idade>10 && idade<20) {
            medh = medh + altura;
        if(altura>maiorh)
            maiorh = altura;
    }
    printf("\nQuantidade de pessoas com mais de 50 anos: %d",qtdmaisde50);
    printf("\nMedia das alturas das pessoas com idade entre 10 e 20 anos: %.2f",medh/i); }
    printf("\nMaior altura encontrada: %.2f\n",maiorh);

    return 0;
}