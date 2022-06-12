#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int m[5][5], i, j, ds[5];
    srand(time(NULL));
    printf("\nMatriz:\n");
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++) {
            m[i][j] = rand() % 10;
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    printf("Diagonal Secundaria: ");
    for(i=0,j=4;i<5;i++,j--) {
        ds[i] = m[i][j];
        printf("%d ",ds[i]);
    }
    printf("\n");

    return 0;
}