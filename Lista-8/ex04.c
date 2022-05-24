#include<stdio.h>
#include<math.h>

float delta(float a,float b,float c);
float r1(float a,float b, float c, float delta);
float r2(float a,float b, float c, float delta);

int main() {
    float a, b, c, deltaaux;
    printf("\n Para calcular a*x^2+b*x+c=0, informe os valores de a, b e c, respectivamente: ");
    scanf("%f%f%f",&a,&b,&c);
    deltaaux = delta(a,b,c);
    if(delta(a,b,c)>0)
        printf("Existem duas solucoes, quando x = %.4f e x = %.4f\n",r1(a,b,c,deltaaux),r2(a,b,c,deltaaux));
    else if(delta(a,b,c)==0)
        printf("Existe uma unica solucao, quando x = %.4f\n",r1(a,b,c,deltaaux));
    else
        printf("Nao existem raizes reais para a solucao desta equacao\n");

    return 0;
}

float delta(float a,float b,float c) {
    float delta;
    delta = b*b - 4*a*c;

    return delta;
}

float r1(float a,float b, float c, float delta) {
    float r1;
    r1 = (-b+pow(delta,1.0/2.0))/(2*a);

    return r1;
}

float r2(float a,float b, float c, float delta) {
    float r2;
    r2 = (-b-pow(delta,1.0/2.0))/(2*a);

    return r2;
}