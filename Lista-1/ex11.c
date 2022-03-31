#include <stdio.h>

int main() {
    float liters, time, speed;
    scanf("%f %f", &time, &speed);
    liters = time * speed / 12;
    printf("%.3f\n", liters);

    return 0;
}