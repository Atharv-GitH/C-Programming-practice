
  #include <stdio.h>

   int main() {

    char var;

    printf("Enter a character: ");

    scanf(" %c", &var);  // Note the space before %c to clear any extra whitespace

    if (var >= 'A' && var <= 'Z')

        printf("You entered the UPPERCASE character.\n");

    else if (var >= 'a' && var <= 'z')

        printf("You entered the lowercase character.\n");

    else

        printf("You did not enter an alphabet character.\n");

    return 0;
}
 
