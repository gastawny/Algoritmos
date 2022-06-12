#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define m 4
#define n 4

int main() {
    int a[m][n], i, j, cont[2]={0};
    srand(time(NULL));
    for(i=0;i<m;i++)
        for(j=0;j<n;j++) {
            //printf("M[%d][%d] = ");
            //scanf("%d",&a[i][j]);
            a[i][j] = rand() % 5;
            if(a[i][j]==0)
                cont[0]++;
            cont[1]++;
        }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("\nGrau de Esparsidade = %.4f\n",(float)cont[0]/cont[1]);


    return 0;
}