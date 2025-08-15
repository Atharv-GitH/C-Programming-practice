// Triangle Validity

#include<stdio.h>

void main() {

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a + b + c == 180)
        printf("The triangle with angles %d %d & %d is a valid one", a, b, c);
    else
        printf("The triangle with angles %d %d & %d is an invalid one", a, b, c);
}

