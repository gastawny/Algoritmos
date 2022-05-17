#include <stdio.h>

int main() {
    int i, sexo, numhomens=0, nummulheres=0;
    float altura, maiorh=0, menorh=10000, medhmul=0;
    for(i=1, sexo=1, altura=1;i<=2;i++) {
        do{
            if(sexo == 0 || sexo == 1) {
                printf("Digite o seu sexo (0-Masculino ou 1-Feminino): ");
                scanf("%d", &sexo);
            } else {
                printf("Digite novamente o seu sexo (0-Masculino ou 1-Feminino): ");
                scanf("%d", &sexo);
            }
        } while(sexo != 0 && sexo != 1);
        do{
            if(altura > 0) {
                printf("Digite a sua altura em metros: ");
                scanf("%f", &altura);
            } else {
                printf("Digite novamente a sua altura em metros: ");
                scanf("%f", &altura);
            }
        } while(altura <= 0);
        if(altura > maiorh)
            maiorh = altura;
        if(altura < menorh)
            menorh = altura;
        if(sexo==1) {
            nummulheres++;
            medhmul = (medhmul + altura)/nummulheres;
        } else
            numhomens++;
    }
    printf("\n\nMaior altura do grupo: %.2f\nMenor altura do grupo: %.2f\n", maiorh, menorh);
    if(medhmul==0)
        printf("Nao obteve-se dados sobre mulheres\n");
    else
        printf("Media de altura das mulheres: %.2f\n", medhmul);
    if(numhomens==0)
        printf("Nao obteve-se dados sobre homens\n");
    else
        printf("Numero de homens: %d\n", numhomens);

    return 0;
}