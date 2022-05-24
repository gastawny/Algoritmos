#include<stdio.h>
#include<math.h>
#define pi 3.141592654

float escada(float angulo, float h);

int main() {
    float h, angulo;
    do{
        printf("\nDigite o angulo formado pela escada apoiada no chao e encostada na parede, e a altura da parede onde esta a ponta da escada: ");
        scanf("%f%f",&angulo,&h);
    }while(angulo<0 || h<0);
    printf("A medida da escada e: %.4f",escada(angulo,h));

    return 0;
}

float escada(float angulo, float h) {
    float rad;
    rad = angulo * pi / 180;
    return h/cos(rad);
}