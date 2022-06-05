#include<stdio.h>

int main() {
    int v[15], p[15], i[15], j;
    printf("\nDigite 15 valores positivos e inteiros:\n");
    for(j=0;j<15;j++) {
        do{
            printf("Numero %d: ",j+1);
            scanf("%d",&v[j]);
        }while(v[j]<=0);
        if(v[j]%2==0) {
            p[j] = v[j];
            i[j] = 0;
        }
        else {
            i[j] = v[j];
            p[j] = 0;
        }
    }
    for(j=0;j<15;j++) {
        if(p[j]!=0)
            printf("\nElemento V[%d] = %d e par\n", j, p[j]);
        if(i[j]!=0)
            printf("\nElemento V[%d] = %d e impar\n", j, i[j]);
    }
    
    return 0;
}