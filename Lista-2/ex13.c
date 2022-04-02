#include <stdio.h>

int main() {
    int Hinicial, Hfinal, Minicial, Mfinal, horas, minutos, maxminhoras;
    printf("\nInsira primeiro a hora e depois os minutos de inicio\n");
    scanf("%d %d", &Hinicial, &Minicial);
    printf("\nInsira primeiro a hora e depois os minutos de termino\n");
    scanf("%d %d", &Hfinal, &Mfinal);

    if (Hinicial >= 0 && Hinicial <=24 && Hfinal <= 24 && Hfinal >= 0 && Minicial >= 0 && Minicial >= 0 && Minicial <= 60 && Mfinal <=60 && Mfinal >=0) {
        if (Hfinal > Hinicial) {
            if (Minicial > Mfinal || Minicial < Mfinal) {
                if (Minicial > Mfinal) {
                    horas = Hfinal - Hinicial - 1;
                    minutos = 60 + Mfinal - Minicial;
                    printf("O jogo durou %dmin", minutos);
                } else if (Minicial < Mfinal) {
                    horas = Hfinal - Hinicial;
                    minutos =  Mfinal - Minicial;
                    printf("O jogo durou %dh e %dmin", horas, minutos);
                }
            } else {
                horas = Hfinal - Hinicial;
                printf("O jogo durou %dh", horas);
            }
        } else if (Hfinal < Hinicial) {
            if (Minicial > Mfinal || Minicial < Mfinal) {
                if (Minicial > Mfinal) {
                    horas = 24 - Hinicial + Hfinal - 1;
                    minutos = 60 + Mfinal - Minicial;
                    printf("O jogo durou %dh e %dmin", horas, minutos);
                } else if (Minicial < Mfinal) {
                    horas = 24 - Hinicial + Hfinal;
                    minutos =  Mfinal - Minicial;
                    printf("O jogo durou %dh e %dmin", horas, minutos);
                }
            }  else {
                horas = 24 - Hinicial + Hfinal;
                printf("O jogo durou %dh", horas);
            }
        } else {
            if (Minicial < Mfinal) {
                minutos =  Mfinal - Minicial;
                printf("O jogo durou %dmin", minutos);
            } else if (Minicial > Mfinal) {
                horas = 23;
                minutos = 60 + Mfinal - Minicial;
                printf("O jogo durou %dh e %dmin", horas, minutos);
            } else {
                printf("O jogo durou 24h");
            }
        }
    } else {
        printf("Dados invalidos");
    }

    return 0;
}