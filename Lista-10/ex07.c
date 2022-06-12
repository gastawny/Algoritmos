#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int m[5][5], sl[5]={0}, sc[5]={0}, i, j;
    srand(time(NULL));
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++) {
            m[i][j] = rand() % 10;
            printf("%d ",m[i][j]);
            sl[i] = sl[i] + m[i][j];
        }
        printf("\n");
    }
    for(j=0;j<5;j++)
        for(i=0;i<5;i++)
            sc[j] = sc[j] + m[i][j];
    for(i=0;i<5;i++) {
        printf("\nSoma da linha %d = %d",i+1,sl[i]);
        printf("\tSoma da coluna %d = %d",i+1,sc[i]);
    }
    printf("\n");

    return 0;
}