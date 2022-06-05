#include<stdio.h>

void res(int n, float g1[n], float g2[n]);

int main() {
    int n, i;
    do{
        printf("\nDigite o numero de alunos: ");
        scanf("%d",&n);
    }while(n<0);
    printf("Digite a nota 1 e depois a nota 2\n");
    float g1[n], g2[n], g3[n];
    for(i=0;i<n;i++) {
        do{
            printf("Aluno %d: ",i+1);
            scanf("%f%f",&g1[i],&g2[i]);
        }while(g1[i]<0||g2[i]<0);
    }
    res(n, g1, g2);
    

    return 0;
}

void res(int n, float g1[n], float g2[n]) {
    int i;
    float g3[n];
    for(i=0;i<n;i++) {
        g3[i] = (g1[i] + g2[i]) / 2;
        printf("\nNotas aluno %d: G1=%.4f, G2=%.4f, G3=%.4f",i+1,g1[i],g2[i],g3[i]);
    }
    printf("\n");
}