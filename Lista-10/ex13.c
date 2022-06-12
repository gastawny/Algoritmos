#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define m 4
#define n 4
int c[m][n];

int soma(int a[m][n], int b[m][n]);

int main() {
    int a[m][n], b[m][n], i, j;
    srand(time(NULL));
    printf("\nMatriz A:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            a[i][j] = rand() % 10;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz B:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            b[i][j] = rand() % 10;
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    soma(a,b);
    printf("Matriz A+B:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int soma(int a[m][n], int b[m][n]) {
    int i, j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            c[i][j] = a[i][j] + b[i][j];

    return 0;
}