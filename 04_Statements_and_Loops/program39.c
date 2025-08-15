// Character equality or difference

#include<stdio.h>

void main() {

    char a, b;

    scanf(" %c %c", &a, &b);

    if(a == b)
        printf("Both characters are same: %c", a);
    else
        printf("Difference between %c and %c is %d", a, b, b - a);
}

