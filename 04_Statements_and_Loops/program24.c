//Max among 3 numbers

#include<stdio.h>

void main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
        printf("max number is %d", a);
    else if(b > c)
        printf("max number is %d", b);
    else
        printf("max number is %d", c);
}

