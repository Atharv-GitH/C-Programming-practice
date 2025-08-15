// Count and Print Divisors

#include<stdio.h>

void main() {
    int num, i = 1;
    scanf("%d", &num);

    printf("Divisors of %d are\n", num);

    while(i <= num) {
        if(num % i == 0) {
            printf("%d\n", i);
        }
        i++;
    }
}

