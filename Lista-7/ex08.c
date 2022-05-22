#include<stdio.h>
int soma=0;

void media(int i) {
    int x;
    printf("\nNumero %d: ",i);
    scanf("%d",&x);
    soma = soma + x;
}

int main() {
    int n, i;
    printf("\nDigite o numero de termos da media: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        media(i);
    }
    printf("Media = %.4f", (float)soma/n);

    return 0;
}