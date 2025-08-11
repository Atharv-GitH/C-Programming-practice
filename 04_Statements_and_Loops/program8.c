
// print maximum number

#include <stdio.h>

void main() {

    int a, b;

    // Take input from the user
    printf("Enter two numbers separated by space: ");
    scanf("%d %d", &a, &b);

    // Find and print the maximum

    if (a > b) {
        printf("%d\n", a);
    } else {
        printf("%d\n", b);
    }

   
} 
