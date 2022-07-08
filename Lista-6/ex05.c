#include<stdio.h>
#define tam 50

int main() {
    char nome[tam][100];
    int sexo[tam], idade[tam], i, contobesos=0, contnormal=0;
    float peso[tam], altura[tam], imc[tam];
    for(i=0;i<tam;i++) {
        printf("Funcionaria %d, digite o seu nome: ",i+1);
        fgets(nome[i],100,stdin);
        printf("Digite o seu sexo(0-masculino ou 1-feminino): ");
        scanf("%d",&sexo[i]);
        printf("Digite a sua altura em metros: ");
        scanf("%f",&altura[i]);
        printf("Digite o seu peso em kg: ");
        scanf("%f",&peso[i]);
        printf("Digite a sua idade: ");
        scanf("%d",&idade[i]);

        imc[i] = peso[i]/(altura[i]*altura[i]);
        if(imc[i]>=30)
            contobesos++;
        if(sexo[i]==0&&imc[i]<=25)
            contnormal++;
        if(sexo[i]==1&&imc[i]<=27)
            contnormal++;

    }
    printf("\n=====================\n");
    for(i=0;i<tam;i++)
        printf("\nFuncionario %d:\nNome: %simc = %.4f\nPercentual de funcionarios obesos: %.2f%%\nPercentual de funcionarios com o imc normal: %.2f%%\n",i+1,nome[i],imc[i],(float)contobesos*100/tam,(float)contnormal*100/tam);
    
    return 0;
}