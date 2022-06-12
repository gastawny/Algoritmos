#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int m[7][5], i=0, j, soma[7] = {0};
    srand(time(NULL));
    while(i<7) {
        j=0;
        while(j<5) {
            m[i][j] = rand() % 10;
            printf("%d ",m[i][j]);
            soma[i] = soma[i] + m[i][j];
            j++;
        }
        printf("\n");
        i++;
    }
    i=0;
    printf("\nSoma das Linhas:\n");
    while(i<7) {
        printf("Linha %d: %d\n",i+1,soma[i]);
        i++;
    }
    return 0;
}