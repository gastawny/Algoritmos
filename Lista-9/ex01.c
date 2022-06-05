#include<stdio.h>

int main() {
    int i, n[15], pos, num=0;
    for(i=0;i<15;i++) {
        printf("Numero %d: ",i+1);
        scanf("%d",&n[i]);
        if(n[i]>num) {
            num = n[i];
            pos = i + 1;
        }
    }
    printf("\nO maior numero e: %d\nSua posicao e: %d",num,pos);

    return 0;
}