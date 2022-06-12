#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int m[5][5], i, j, sl4=0, sc2=0, sdp=0, sds=0, soma=0;
    srand(time(NULL));
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++) {
            m[i][j] = rand() % 10;
            printf("%d ",m[i][j]);
            if(i==3)
                sl4 = sl4 + m[i][j];
            if(j==1)
                sc2 = sc2 + m[i][j];
            if(i==j)
                sdp = sdp + m[i][j];
            soma = soma + m[i][j];
        }
        printf("\n");
    }
    for(i=0,j=4;i<5;i++,j--)
        sds = sds + m[i][j];
    printf("\nSoma da linha 4: %d\nSoma da coluna 2: %d\nSoma da diagonal principal: %d\nSoma da diagonal secundaria: %d\nSoma de todos os elementos da matriz: %d\n",sl4,sc2,sdp,sds,soma);
    

    return 0;
}