#include<stdio.h>

int main() {
    int filhos, i, f=0, salef=0;
    float medsal=0, medfil=0, salario;
    for(i=1;i<=100;i++) {
        do{
            printf("\n(Funcionario %d) Digite o seu salario: R$ ",i);
            scanf("%f",&salario);
        }while(salario<0);
        do{
            printf("(Funcionario %d) Digite o numero de filhos: ",i);
            scanf("%d",&filhos);
        }while(salario<0);
        medsal = medsal + salario;
        medfil = medfil + filhos;
        if(filhos>0) {
            f++;
            if(salario<300)
                salef++;
        }
    }
    printf("\nMedia salarial destes funcionarios: R$ %.2f", medsal/(i-1));
    printf("\nMedia do numero de filhos: %.2f",medfil/(i-1));
    if(f>0)
        printf("\nPercentual de pessoas com salario ate R$ 300.00, que possuem filhos: %%%d", 100*salef/f);

    return 0;
}