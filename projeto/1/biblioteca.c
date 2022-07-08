#include<string.h>
#include<stdio.h>
#include "biblioteca.h"

int mult(int a, int b) {
    if(a==0||b==0)
        return 0;
    else
        return b + mult(b,a-1);
}

int fat(int n) {
    if(n==0)
        return 1;
    else
        return n*fat(n-1);
}

int div(int n) {
    if(n==0) {
        printf("%d",n);
        return 0;
    }else if(n%5==0) {
        printf("%d ",n);
        return div(n-1);
    }else
        return div(n-1);
}

int somaimpares(int n) {
    if(n==1)
        return 1;
    if(n%2==1)
        return n+somaimpares(n-2);
    else if(n%2==0)
        return n-1+somaimpares(n-3);

}

int aux1(char string[], char letra, int n) {
    int soma=0;
    if(n<0)
        return 0;
    char a = string[n];
    if(a==letra)
        soma++;
    return aux1(string,letra,n-1) + soma;
}

int compstr(char string[], char letra) {
    int n = strlen(string);
    return aux1(string,letra,n);
}

float aux2(int i, int m[i][i], int a) {
    if(a==0)
        a = i;
    int j=a-1;
    float soma=0;
    if(j==0)
        return 0;
    else{
        for(;j>0;j--)
            soma = soma + m[j-1][a-1];
        return aux(i,m,a-1) + soma;
    }
}

float calcula(int i, int m[i][i]) {
    return aux2(i,m,0);
}