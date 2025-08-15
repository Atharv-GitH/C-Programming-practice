// Check if a number is multiple of 3

#include<stdio.h>

void main() {
    int num;
    scanf("%d", &num);

    if(num % 3 == 0)
        printf("%d is a multiple of 3", num);
    else
        printf("%d is not a multiple of 3", num);
}

