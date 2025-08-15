// Factorial of a number

#include<stdio.h>

void main() {

    int num, i = 1;

    long long fact = 1;

    scanf("%d", &num);

    while(i <= num) {
        fact = fact * i;
        i++;
    }

    printf("Factorial = %lld", fact);
}

