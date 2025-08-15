// Min among 3 numbers

#include<stdio.h>

void main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a < b && a < c)
        printf("minimum number is %d", a);
    else if(b < c)
        printf("minimum number is %d", b);
    else
        printf("minimum number is %d", c);
}

