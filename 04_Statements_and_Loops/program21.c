// Sum of first 10 odd numbers

#include<stdio.h>

void main() {
    int count = 0, num = 1, sum = 0;

    while(count < 10) {
        sum = sum + num;
        num = num + 2;
        count++;
    }

    printf("Sum = %d", sum);
}

