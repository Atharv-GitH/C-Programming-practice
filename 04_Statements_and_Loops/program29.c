// Pythagorean Triplet

#include<stdio.h>

void main() {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
        printf("It is a Pythagorean triplet");
    else
        printf("It is not a Pythagorean triplet");
}

