// Numbers in range with multiplicative inverse

#include<stdio.h>

void main() {

    int start, end;

    scanf("%d %d", &start, &end);

    int i = start;

    while(i <= end) {
        printf("%d = 1/%d i.e %.2f\n", i, i, 1.0 / i);
        i++;
    }
}

