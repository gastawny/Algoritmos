#include<stdio.h>

void somar(float x, int r) {
    printf("\nA soma dos 5 primeiros termos desta pa e: %.4f",(5*(2*x+4*r))/2);
}

int main() {
    float x;
    int r;
    printf("\nDigite o primeiro termo e a razao desta PA: ");
    scanf("%f%d",&x,&r);
    somar(x,r);

    return 0;
}