#include<stdio.h>
#include<math.h>

void quadrado(int n) {
    printf("\n O quadrado de %d e: %d",n,n*n);
}

void raizcubica(int n) {
    printf("\n A raiz cubica de %d e: %.4f",n,pow(n,1.0/3.0));
}

void raizquadrada(int n) {
    printf("\n A raiz quadrada de %d e: %.4f",n,pow(n,1.0/2.0));
}

void cubo(int n) {
    printf("\n O cubo de %d e: %d",n,n*n*n);
}

int main() {
    int n;
    do{
        printf("\nDigite um numero inteiro e positivo: ");
        scanf("%d",&n);
    }while(n<=0);
    quadrado(n);
    raizcubica(n);
    raizquadrada(n);
    cubo(n);

    return 0;
}