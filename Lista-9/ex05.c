#include<stdio.h>

int main() {
    int v[5], u[5], i, aux;
    printf("\nDigite 15 valores inteiros e positivos\n");
    for(i=0;i<5;i++) {
        do{
            printf("Numero %d: ",i+1);
            scanf("%d",&aux);
        }while(aux<=0);
        if(aux%2==0) {
            v[i] = aux;
            u[i] = 0;
        } else {
            v[i] = 0;
            u[i] = aux;
        }
    }
    for(i=0;i<5;i++) {
        if(v[i]!=0)
            printf("\nNumero %d: %d e par",i+1,v[i]);
        if(u[i]!=0)
            printf("\nNumero %d: %d e impar",i+1,u[i]);
    }
    printf("\n");

    return 0;
}