#include<stdio.h>
#include<math.h>

int main() {
    int i, sinal=-1, n, x, fat, exp;
    float soma;
    do{
        printf("\nDigite o numero de termos para realizar o somatorio (S=X-X^2/3!+X^4/5!-X^6/7!...): ");
        scanf("%d",&n);
    }while(n<0);
    printf("Digite o valor de X: ");
    scanf("%d",&x);
    soma=x;
    if(n==1)
        printf("\nS = %.0f",soma);
    else {
        for(exp=2;n-1>0;n--,exp=exp+2) {
            for(i=exp+1,fat=1;i>0;i--)
                fat = fat*i;
            soma = soma + (sinal * pow(x,exp)/fat);
            sinal = sinal * (-1);
        }
        printf("S = %.4f",soma);
    }

    return 0;
}