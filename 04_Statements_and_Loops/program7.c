
// vowel or consonant

#include <stdio.h>

 void main() {

    char var;

    printf("Enter an alphabet character: ");
    scanf(" %c", &var);  // Space before %c to ignore any leftover whitespace

    if ((var >= 'A' && var <= 'Z') || (var >= 'a' && var <= 'z')) {

        char ch = (var >= 'a' && var <= 'z') ? var - 32 : var;

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')

            printf("%c is a vowel.\n", var);

        else

            printf("%c is a consonant.\n", var);

    } else {

        printf("You did not enter an alphabet character.\n");

    }

   
}

