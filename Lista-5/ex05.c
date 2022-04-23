#include <stdio.h>

int main() {
    float c, f = 50;
    do{
        c = 5.0 / 9 * (f - 32);
        printf("%.0foF = %.2foC\n", f, c);
        f++;
    } while(f <= 150);

    return 0;
}