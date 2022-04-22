#include <stdio.h>

int main() {
    int i, fat = 1, prod = 1, iaux;
    printf("Qual o fatorial deseja calcular?\n");
    scanf("%d", &i);
    iaux = i;
    for (fat <= i ; i > 0 ; i--) {
        prod = prod * i;
    }
    printf("%d! = %d\n", iaux, prod);

    return 0;
}