#include<stdio.h>

int horas(int hi,int hf, int mi, int mf);
int minutos(int mi,int mf);

int main() {
    int hi, hf, mi, mf;
    do{
        printf("\nDigite a hora e o minuto de inicio: ");
        scanf("%d%d",&hi,&mi);
    }while(hi<0||mi<0);
    do{
        printf("Digite a hora e o minuto de termino: ");
        scanf("%d%d",&hf,&mf);
    }while(hf<0||mf<0);
    printf("Tempo: %dh %dmin\n",horas(hi,hf,mi,mf),minutos(mi,mf));

    return 0;
}

int minutos(int mi, int mf) {
    int total;
    if(mf>=mi)
        total = mf - mi;
    else
        total = 60 - mi + mf;

    return total;
}

int horas(int hi,int hf, int mi, int mf) {
    int total;
    if(hf>hi) {
        total = hf - hi;
        if(mf<mi)
            total = total - 1;
    } else if(hi>hf) {
        total = 24 - hi + hf;
        if(mf<mi)
            total = total - 1;
    } else
        total = 0;

    return total;
}