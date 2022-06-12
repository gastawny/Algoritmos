#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int m[6][6], i, j, k, v[36], a;
    srand(time(NULL));
    a = rand() % 10;
    for(i=0;i<6;i++) {
        for(j=0;j<6;j++) {
            m[i][j] = rand() % 10;
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\nvalor de A: %d\n",a);
    for(i=0,k=0;i<6;i++)
        for(j=0;j<6;j++,k++) {
            v[k] = m[i][j]*a;
            printf("%d ",v[k]);
        }
    printf("\n");
    
    return 0; 
}