#include<stdio.h>

float polegada(float pe);
float jarda(float pe);
float milha(float pe);

int main() {
    float pe;
    do{
    printf("\nDigite a medida em pes: ");
    scanf("%f",&pe);
    }while(pe<0);
    printf("\n%.4f pe(s) = %f polegada(s)\n%.4f pe(s) = %f jarda(s)\n%.4f pe(s) = %f milha(s)\n",pe,polegada(pe),pe,jarda(pe),pe,milha(pe));

    return 0;
}

float polegada(float pe) {
    float polegada;
    polegada = 12*pe;

    return polegada;
}

float jarda(float pe) {
    float jarda;
    jarda = pe/3;

    return jarda;
}

float milha(float pe) {
    float milha;
    milha = (pe/3)/1760;

    return milha;
}