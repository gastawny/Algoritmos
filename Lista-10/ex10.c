#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int m[3][4], i, j, cont[2]={0}, aux;
    srand(time(NULL));
    for(i=0;i<3;i++) {
        for(j=0,aux=0;j<4;j++) {
            m[i][j] = rand() % 2;
            printf("%d ",m[i][j]);
            if(m[i][j]==0)
                aux++;;
        }
        if(aux==4)
            cont[0]++;
        printf("\n");
    }
    for(j=0;j<4;j++)
        for(i=0,aux=0;i<3;i++)
            if(m[i][j]==0)
                aux++;
        if(aux==3)
            cont[1]++;
    printf("\nNumero de linhas nulas: %d\nNumero de colunas nulas: %d\n",cont[0],cont[1]);

    return 0;
}