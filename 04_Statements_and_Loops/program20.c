//Print table of 11 in reverse

#include<stdio.h>

void main() {
    int num = 10;

    while(num >= 1) {
        printf("%d x 11 = %d\n", num, num * 11);
        num--;
    }
}

