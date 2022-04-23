#include <stdio.h>

int main() {
    float r = 0, v, pi = 3.1415;
    do{
        v = (4*pi*r*r*r)/3; 
        printf("V = %.4f com o raio = %.1f\n", v, r);
        r = r + 0.5;
    } while (r <= 20);

    return 0;
}