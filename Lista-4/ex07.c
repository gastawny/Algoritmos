#include <stdio.h>

int main() {
    float e = 1, i, aux = 1, fat;
    for (i = 1; i <= 15; i++) {
        fat = 1;
        for (aux = 1; aux <= i; aux++)
        fat = fat * aux;
        e = e + 1 / fat;
    } 
    printf("%f\n", e);

    return 0;
}