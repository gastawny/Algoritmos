#include <stdio.h>

int main() {
    float salario, filhos, somasalario, somafilhos, n, aux = 0;
    printf("\nDigite seu salario e o numero de filhos, respectivamente, para realizar a pesquisa\n");
    for (n = 1; n <= 100; n++) {
        printf("Funcionario %.0f: ", n);
        scanf("%f %f", &salario, &filhos);
        somafilhos = somafilhos + filhos;
        somasalario = somasalario + salario;
        if (salario <= 300 && filhos != 0)
        aux++;
    }
    printf("\nMedia de filhos: %.2f\t Media salarial: R$ %.2f\nPercentual de funcionarios com salario de ate R$ 300.00, que possuem filhos: %.0f%%\n", somafilhos / (n-1), somasalario / (n-1), aux*100/(n-1));

    return 0;
}