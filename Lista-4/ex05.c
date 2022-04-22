#include <stdio.h>
#include <math.h>

int main() {
    float soma1 = 0, soma2 = 0, a = 1, b = 1, c = 2, d = 2;
    for (a == 0 ; a < 10 ; a = a + 2, b = b + 2)
    soma1 = soma1 + (a / (b * b));
    for (c == 2 ; c <=10 ; c = c + 2, d = d + 2)
    soma2 = soma2 + (c / (d * d));
    printf("S = 1/1 - 2/4 + 3/9 - 4/16 + 5/25 - 6/36 ... -10/100 = %f", sqrt(pow(soma1 - soma2, 2)));

    return 0;
}