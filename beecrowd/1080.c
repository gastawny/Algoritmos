#include <stdio.h>

int main() {
    int i, num, pos = -1, maiornum = -1;
    for(i=1; i<=100; i++) {
        scanf("%d", &num);
        if(num > maiornum) {
            maiornum = num;
            pos = i;
        }
    }
    printf("%d\n%d\n", maiornum, pos);

    return 0;
}