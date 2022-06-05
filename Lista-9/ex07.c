#include<stdio.h>

int main() {
    int i, v1[5], v2[5];
    for(i=0;i<5;i++) {
        printf("\nv1[%d] = ",i);
        scanf("%d",&v1[i]);
        printf("v2[%d] = ",i);
        scanf("%d",&v2[i]);
    }
    for(i=0;i<5;i++) {
        printf("\nSoma de v1[%d] + v2[%d] = %d",i,i,v1[i]+v2[i]);
        printf("\nSubtracao de v1[%d] - v2[%d] = %d",i,i,v1[i]-v2[i]);
        printf("\nProduto de v1[%d] * v2[%d] = %d",i,i,v1[i]*v2[i]);
        if(v2[i] == 0)
            printf("\nNao existe a divisao de v1[%d] / v2[%d]",i,i);
        else
            printf("\nDivisao de v1[%d] / v2[%d] = %.4f",i,i,(float)v1[i]/v2[i]);
        printf("\n");
    }
    printf("\n");

    return 0;
}