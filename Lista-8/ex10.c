#include<stdio.h>
#include<math.h>

float D(float a, float b, float c);
float L(float a, float b, float c);

int main() {
    float a, b, c;
    do{
        printf("\nDigite 3 valores para calcular o valor da diagonal de um paralelepipedo\n");
        scanf("%f%f%f",&a,&b,&c);
    }while(a<=0||b<=0||c<=0);
    printf("Diagonal = %.4f\n",D(a,b,c));

    return 0;
}

float D(float a, float b, float c) {
    float d;
    d = pow((pow(L(a,b,c),2.0)+pow(c,2.0)),1.0/2.0);

    return d;
}

float L(float a, float b, float c) {
    float l;
    l = pow((pow(a,2.0)+pow(b,2.0)),1.0/2.0);

    return l;
}