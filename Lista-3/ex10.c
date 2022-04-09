#include <stdio.h>

int main() {
    char op1, op2, op3;
    printf("Segundo as perguntas, escolha os seguintes animais: Leao, cavalo, homem, macaco, avestruz, pinguim e pato.\nA maioria dos animais de sua classe nao voam?\nS-Sim\nN-Nao\n");
    scanf("%c", &op1);

    switch (op1) {
        case 's':
        case 'S': {
            setbuf(stdin, NULL);
            printf("\nPossui 4 pernas?\nS-Sim\nN-Nao\n");
            scanf("%c", &op2);
            switch (op2) {
                case 's':
                case 'S': {
                    setbuf(stdin, NULL);
                    printf("\nCome carne?\nS-Sim\nN-Nao\n");
                    scanf("%c", &op3);
                    switch (op3) {
                        case 's':
                        case 'S': printf("\nEste animal e um LEAO\n\n"); break;
                        case 'n':
                        case 'N':printf("\nEste animal e um CAVALO\n\n"); break;
                        default: printf("\nValor invalido\n");
                    }
                } break;
                case 'n':
                case 'N': {
                    setbuf(stdin, NULL);
                    printf("\nCome carne e plantas?\nS-Sim\nN-Nao\n");
                    scanf("%c", &op3);
                    switch (op3) {
                        case 's':
                        case 'S': printf("\nEste animal e um HOMEM\n\n"); break;
                        case 'n':
                        case 'N': printf("\nEste animal e um MACACO\n\n"); break;
                        default: printf("\nValor invalido\n");
                    }
                } break;
                default: printf("\nValor invalido\n");
            }
        } break;
        case 'n': 
        case 'N': {
            setbuf(stdin, NULL);
            printf("\nE um animal nao-voador?\nS-Sim\nN-Nao\n");
            scanf("%c", &op2);
            switch (op2) {
                case 's':
                case 'S': {
                    setbuf(stdin, NULL);
                    printf("\nE um animal de ambiente tropical?\nS-Sim\nN-Nao\n");
                    scanf("%c", &op3);
                    switch (op3) {
                        case 's':
                        case 'S': printf("\nEste animal e um AVESTRUZ\n\n"); break;
                        case 'n':
                        case 'N': printf("\nEste animal e um PINGUIM\n\n"); break;
                        default: printf("\nValor invalido\n");
                    }
                } break;
                case 'n':
                case 'N': printf("\nEste animal e um PATO\n\n"); break;
                default: printf("\nValor invalido\n");
            }
        } break;
        default: printf("\nValor invalido\n");
    }

    return 0;
}