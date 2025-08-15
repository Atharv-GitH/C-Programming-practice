//Print first ten 3-digit numbers

#include<stdio.h>

void main() {
    int num = 100;
    int count = 0;

    while(count < 10) {
        printf("%d ", num);
        num++;
        count++;
    }
}

