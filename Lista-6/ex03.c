#include<stdio.h>

int main() {
    int i;
    float salario;
    for(i=1;i<=1000;i++) {
        do{
            printf("\nFuncionario %d, digite o seu salario: ",i);
            scanf("%f",&salario);
        }while(salario<0);
    if(salario<10000)
        printf("\nO salario do funcionario %d com reajuste sera: R$ %.2f\n",i,salario*1.55);
    else if(salario<=25000)
        printf("\nO salario do funcionario %d com reajuste sera: R$ %.2f\n",i,salario*1.3);
    else
        printf("\nO salario do funcionario %d com reajuste sera: R$ %.2f\n",i,salario*1.2);
    }
}