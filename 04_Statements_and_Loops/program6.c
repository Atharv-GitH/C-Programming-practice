
// int positive or negative

#include <stdio.h>

int main() {

    int var;

    printf("Enter a number: ");
    scanf("%d", &var);

    if (var > 0)

        printf("%d is a positive number\n", var);

    else if (var < 0)

        printf("%d is a negative number\n", var);

    else

        printf("The number is zero\n");

    return 0;
}
 
