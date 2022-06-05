#include<stdio.h>

int main() {
    int n, i;
    do{
        printf("\nDigite a quantidade de termos: ");
        scanf("%d",&n);
    }while(n<=0);
    float v1[n], v2[n], v3[n], med1=0, med2=0, med3=0;
    for(i=0;i<n;i++) {
        printf("v1[%d] = ",i);
        scanf("%f",&v1[i]);
        printf("v2[%d] = ",i);
        scanf("%f",&v2[i]);
        printf("v3[%d] = ",i);
        scanf("%f",&v3[i]);
        printf("\n");
        med1 = med1 + v1[i];
        med2 = med2 + v2[i];
        med3 = med3 + v3[i];
    }
    printf("\nMedia dos elementos dos vetores:\nv1 = %.4f\nv2 = %.4f\nv3 = %.4f\n",med1/n,med2/n,med3/n);

    return 0;
}