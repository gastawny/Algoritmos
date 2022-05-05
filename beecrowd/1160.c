#include <stdio.h>

int main() {
    double g1, g2;
    int t, pa, pb, i, anos, x, y;
    scanf("%d", &t);
    for(i=1;i<=t;i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        for(anos=0;pa<=pb;anos++) {
            pa = pa + (pa*g1/100);
            pb = pb + (pb*g2/100);
            if(anos>100)
                break;
        }
        if(anos>100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", anos);
    }
    return 0;
}