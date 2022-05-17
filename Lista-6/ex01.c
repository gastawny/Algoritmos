#include <stdio.h>

int main() {
    int n, soma;
    for(n=105, soma=0; n<200; n=n+7, soma=soma+n)
        printf("%d\n", n);
    printf("soma: %d\n", soma);

    return 0;
}