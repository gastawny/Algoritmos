#include<stdio.h>

int main() {
    int m, n, i, j;
    do{
        printf("\nDigite o numero de  linhas e colunas: ");
        scanf("%d%d",&m,&n);
    }while(m<=0||n<=0);
    int a[m][n], b[m][n];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++) {
            do{
            printf("M[%d][%d] = ",i+1,j+1);
            scanf("%d",a[i][j]);
            }while(a[i][j]==0);
            if(a[i][j]%2==0)
                b[i][j] = 1/a[i][j];
            else
                b[i][j] = a[i][j]*a[i][j];
        }
    printf("\nMatriz lida:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\nMatriz Processada:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }

    return 0;
}