#include<stdio.h>

int main() {
    int i, num, j, soma;
    for(i=1;i<=10;i++) {
        printf("Numero %d: ",i);
        scanf("%d",&num);
        for(j=1,soma=0;j<num;j++) {
            if(num%j==0)
                soma = soma + j;
        }
        if(soma==num)
            printf("\t\t%d eh um numero perfeito\n",num);
    }

    return 0;
}