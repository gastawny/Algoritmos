#include <stdio.h>

int main() {
    int numero, salario;
    float salariocorrigido;
    printf("Digite seu numero e salario:");
    scanf("%d %d", &numero, &salario);

    if (salario <= 300) {
        salariocorrigido = salario * 1.1;
        printf("\nFuncionario: %d\nSalario atual: R$ %d\nPercentual de aumento: 10%%\nSalario corrigido: R$ %.2f", numero, salario, salariocorrigido);
    } else if (salario > 300 && salario <= 600) {
        salariocorrigido = salario * 1.11;
        printf("\nFuncionario: %d\nSalario atual: R$ %d\nPercentual de aumento: 11%%\nSalario corrigido: R$ %.2f", numero, salario, salariocorrigido);
    } else if (salario > 600 && salario <= 900) {
        salariocorrigido = salario * 1.12;
        printf("\nFuncionario: %d\nSalario atual: R$ %d\nPercentual de aumento: 12%%\nSalario corrigido: R$ %.2f", numero, salario, salariocorrigido);
    } else if (salario > 900 && salario <= 1500) {
        salariocorrigido = salario * 1.06;
        printf("\nFuncionario: %d\nSalario atual: R$ %d\nPercentual de aumento: 6%%\nSalario corrigido: R$ %.2f", numero, salario, salariocorrigido);
    } else if (salario > 1500 && salario <= 2000) {
        salariocorrigido = salario * 1.03;
        printf("\nFuncionario: %d\nSalario atual: R$ %d\nPercentual de aumento: 3%%\nSalario corrigido: R$ %.2f", numero, salario, salariocorrigido);
    } else {
        salariocorrigido = salario * 1;
        printf("\nFuncionario: %d\nSalario atual: R$ %d\nPercentual de aumento: sem aumento\nSalario corrigido: R$ %.2f", numero, salario, salariocorrigido);
    }

    return 0;
}