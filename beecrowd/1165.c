#include <stdio.h>

int main() {
    int i, n, aux, x;
    scanf("%d", &n);
    for(; n>0; n--) {
        scanf("%d", &x);
        for(i=1, aux=1; i<x; i++) {
            if(x%i==0)
                aux++;
        }
        if(aux==2)
            printf("%d eh primo\n", x);
        else
            printf("%d nao eh primo\n", x);
    }

    return 0;
}