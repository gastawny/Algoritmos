#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int x, y, i;
    srand(time(NULL));
    x = rand() % 10 + 1;
    y = rand() % 10 + 1;
    int v[x], u[y], w[x+y];
    for(i=0;i<x;i++) {
        v[i] = rand() % 101;
        w[i] = v[i];
    }
    for(i=x;i<y;i++) {
        u[i] = rand() % 101;
        w[i] = u[i];
    }
    printf("\nVetor concatenado: ");
    for(i=0;i<y;i++)
        printf("%d ",w[i]);
    printf("\n");

    return 0;
} 