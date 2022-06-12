#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int tam, flag=0, aux, i ,j;
    printf("\nDigite a ordem da matriz: ");
    scanf("%d",&tam);
    int m[tam][tam], u[tam][tam];
    for(i=0;i<tam;i++) {
        for(j=0;j<tam;j++) {
            printf("[%d][%d] = ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    printf("\nA matriz:\n");
    for(i=0;i<tam;i++) {
        for(j=0;j<tam;j++) {
            printf("%d ",m[i][j]);
            u[i][j] = m[j][i];
            if(u[i][j] != m[i][j])
                flag = 1;
        }
        printf("\n");
    }
    if(flag==1)
        printf("\nNao e simetrica\n");
    else
        printf("\nE simetrica\n");

    return 0;
}