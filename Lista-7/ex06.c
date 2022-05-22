#include<stdio.h>
#include<math.h>

void distancia(float x1,float x2,float y1,float y2) {
    printf("\nA distancia entre esses pontos e: %.4f", sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
}

int main() {
    float x1, x2, y1, y2;
    printf("\nDigite as coordenadas de um primeiro ponto P1(x,y): ");
    scanf("%f%f",&x1,&y1);
    printf("Digite as coordenadas de um segundo ponto P2(x,y): ");
    scanf("%f%f",&x2,&y2);
    distancia(x1,x2,y1,y2);

    return 0;
}