#include <stdio.h>

int main() {
    float soma = 1, a = 1, b = 1;
    for (a == 1 ; a < 100 ; a = a + 2, b++, soma = soma + (a / b));
   printf("A soma de S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50 = %f", soma);

    return 0;
}