#include<stdio.h>

int main() {
    int m, n, i, j;
    do{
        printf("\nDigite o numero de linhas e colunas: ");
        scanf("%d%d",&m,&n);
    }while(m<=0||n<=0);
    int M[m][n], V[n], U[m];
    srand(time(NULL));
    for(i=0;i<m;i++)
        for(j=0;j<n;j++) {
            printf("M[%d][%d] = ",i+1,j+1);
            scanf("%d",&M[i][j]);
        }
    for(i=0;i<n;i++) {
        printf("V[%d] = ",i+1);
        scanf("%d",&V[i]);
    }
    printf("\nM(%dx%d):\n",m,n);
    for(i=0;i<m;i++) {
        for(j=0,U[i]=0;j<n;j++) {
            U[i] = U[i] + M[i][j]*V[j];
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    printf("\nV(%d):\n",n);
    for(i=0;i<n;i++)
        printf("%d\n",V[i]);
    printf("\nMatiz V(%d)*M(%dx%d):\n",n,m,n);
    for(i=0;i<m;i++)
        printf("%d\n",U[i]);
        
    return 0;
}