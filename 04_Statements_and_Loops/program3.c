
// Even or Odd

#include <stdio.h>

int main() {
	
    int var;

    printf("Enter a number: ");
    scanf("%d", &var);

    if (var % 2 == 0)

        printf("%d is an even no\n", var);

    else

        printf("%d is an odd no\n", var);

    return 0;

}
