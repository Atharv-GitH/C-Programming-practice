// Sum and Average of 10 Numbers

#include<stdio.h>

void main() {
    int i = 0, num, sum = 0;
    float avg;

    while(i < 10) {
        scanf("%d", &num);
        sum = sum + num;
        i++;
    }

    avg = sum / 10.0;

    printf("sum is %d\n", sum);
    printf("Average is %.2f", avg);
}

