#include <stdio.h>

int main(){
   char name[30];

   printf("enter string:\n");

   scanf("%s",name); // stops at space
		     
   printf("you entered: %s\n",name);

   return 0;
}

