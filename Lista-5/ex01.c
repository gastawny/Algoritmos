#include <stdio.h>

int main() {
    int n = 100;
    do{
        if (n % 7 == 0)
        printf("%d e multiplo de 7\n", n);
        n++;
    } while(n <= 200);

    return 0;
}