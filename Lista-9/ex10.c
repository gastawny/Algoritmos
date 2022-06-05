#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print(int aneg[100], int ax[100], int j, int k);

int main() {
    int a[100], aneg[100], ax[100], i, x, aux[100], j, k;
    srand(time(NULL));
    x = rand() % 11; 
    for(i=0,j=0,k=0;i<100;i++) {
        a[i] = rand() % 100;
        aux[i] = rand() % 2;
        if(aux[i]==1) {
            aneg[j] = (-1) * a[i];
            j++;
        }if(a[i]%x==0) {
            ax[k] = a[i];
            k++;
        }
    }
    print(aneg,ax,j,k);

    return 0;
}

void print(int aneg[100], int ax[100], int j, int k) {
    printf("\nNumeros negativos:\n");
    for(;j>1;j--)
        printf("%d ",aneg[j-1]);
    printf("\nNumeros divisiveis por x:\n");
    for(;k>1;k--)
        printf("%d ",ax[k-1]);
    printf("\n");
}