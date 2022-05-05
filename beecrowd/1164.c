#include <stdio.h>

int main() {
    int x, i, aux, soma, n;
    scanf("%d", &n);
    for(; n>0; n--) {
        scanf("%d", &x);
        for(i=1, aux=1, soma=0; i<x; i++) {
            if(x%i==0) {
                aux++;
                soma = soma + i;
            }
        }
        if(x==soma)
            printf("%d eh perfeito\n", x);
        else
            printf("%d nao eh perfeito\n", x);
    }

    return 0;
}