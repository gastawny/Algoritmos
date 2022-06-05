#include<stdio.h>

int main() {
    int f[20], i;
    for(i=0;i<20;i++) {
        f[i] = i*(i+1);
        printf("\nf[%d] = %d",i+1,f[i]);
    }

    return 0;
}