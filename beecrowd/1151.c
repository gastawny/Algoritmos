#include <stdio.h>

int main() {
    unsigned long long int n, a, b, soma, i;
    scanf("%llu", &n);
        printf("0");
    for(a=1, b=0, i=1, soma=0; i<n; i++) {
        b = a;
        a = soma;
        soma = a + b;
        printf(" %llu", soma);
        if(i == n-1)
        printf("\n");
    }

    return 0;
}