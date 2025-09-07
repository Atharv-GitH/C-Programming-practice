#include <stdio.h>

int main(){

   char str[50];

   printf("enter line:\n");

   fgets(str,50,stdin);

   printf("line is: %s",str);

   return 0;
}

