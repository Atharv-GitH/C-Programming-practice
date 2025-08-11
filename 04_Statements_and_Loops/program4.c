
// less than 10 or not

#include <stdio.h>

int main() {

    int var;

    printf("Enter a number: ");
    scanf("%d", &var);

    if (var < 10)

        printf("%d Is Less than 10.\n", var);

    else if (var > 10)

        printf("%d Is greater than 10.\n", var);

    else

        printf("%d Is equal to 10.\n", var);

    return 0;
}

