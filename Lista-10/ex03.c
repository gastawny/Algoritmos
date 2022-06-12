#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int m[7][5], lc[2]={0}, i, j, x=0;
    srand(time(NULL));
    printf("\nMatriz:\n");
    for(i=0;i<7;i++) {
        for(j=0;j<5;j++) {
            m[i][j] = rand() % 10;
            printf("%d ",m[i][j]);
            if(m[i][j]>x) {
                lc[0] = i;
                lc[1] = j;
                x = m[i][j];
            }
        }
        printf("\n");
    }
    printf("\nMaior elemento: %d\nPosicao: M(%d,%d)\n",x,lc[0]+1,lc[1]+1);

    return 0;
}