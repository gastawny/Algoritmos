#include<stdio.h>
#include<stdlib.h>

int calcular(int n, int v[n], int x, int lim);

int main() {
    int n, x, lim;
    do{
        printf("\nDigite o tamanho do vetor: ");
        scanf("%d",&n);
    }while(n<=0);
    do{
        printf("Digite um valor limite maior que 1: ");
        scanf("%d",&lim);
    }while(lim<=1);
    do{
        printf("Digite um numero x maior que e 0 e menor que %d: ",lim);
        scanf("%d",&x);
    }while(x<=0);
    int v[n];
    printf("\nx apareceu %d vezes\n",calcular(n, v, x, lim));

    return 0;
}

int calcular(int n, int v[n], int x, int lim) {
    int i, cont=0;
    for(i=0;i<n;i++) {
        v[i] = rand() % lim;
        if(v[i]==x) {
            printf("\nx = v[%d]",i);
            cont++;
        }
    }
    return cont;
}