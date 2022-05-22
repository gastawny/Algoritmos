#include<stdio.h>

int R(int a, int b) {
    return (a+b)*(a+b);
}

int S(int b, int c) {
    return (c+b)*(c+b);
}
void calcular(int a, int b, int c) {
    printf("\nD = %.2f",(R(a,b)+S(b,c))/2.0);
}

int main() {
    int a, b, c;
    do{
    printf("\nDigite tres numeros inteiros e positivos: ");
    scanf("%d%d%d",&a,&b,&c);
    }while(a<=0 || b<=0 || c<=0);
    calcular(a,b,c);
    
    return 0;
}