// Product of first 10 numbers

#include<stdio.h>

void main() {
    int num = 1;
    long long product = 1;

    while(num <= 10) {
        product = product * num;
        num++;
    }

    printf("Product = %lld", product);
}

