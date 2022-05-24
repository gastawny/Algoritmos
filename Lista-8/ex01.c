#include<stdio.h>

float R(int a, int b);
float S(int b, int c);

int main() {
    int a, b, c;
    do{
        printf("\nDigite tres valores inteiros e positivos: ");
        scanf("%d%d%d",&a,&b,&c);
    }while(a<=0||b<=0||c<=0);
    printf("D = %.4f",(R(a,b)+S(b,c))/2);

    return 0;
}

float R(int a, int b) {
    return (a+b)*(a+b);
}

float S(int b, int c) {
    return (b+c)*(b+c);
}