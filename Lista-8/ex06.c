#include<stdio.h>

float res(float x, int exp);

int main() {
    int exp;
    float x;
    do{
    printf("\nDigite um numero e o seu expoente: ");
    scanf("%f%d",&x,&exp);
    }while(x==0 && exp==0);
    printf("%.4f^%d = %.4f",x,exp,res(x,exp));

    return 0;
}

float res(float x, int exp) {
    float resultado;
    if(exp>0)
        for(resultado=1;exp>0;resultado=resultado*x,exp--);
    else if(exp==0)
        resultado = 1;
    else{
        float aux;
        for(resultado=1;exp<=0;resultado=resultado*x,exp++)
        aux = resultado;
        resultado = 1/aux;
    }

    return resultado;
}