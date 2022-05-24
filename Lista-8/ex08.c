#include<stdio.h>

int calcula(int anos, int meses, int dias);

int main() {
    int anos, meses, dias;
    do{
        printf("\nDigite a sua idade em anos, meses e dias, respectivamente: ");
        scanf("%d%d%d",&anos,&meses,&dias);
    }while(anos<0||meses<0||dias<0);
    printf("Voce viveu aproximadamente %d dias\n",calcula(anos,meses,dias));

    return 0;
}

int calcula(int anos, int meses, int dias) {
    int soma;
    soma = dias + meses*30 + anos*364;

    return soma;
}