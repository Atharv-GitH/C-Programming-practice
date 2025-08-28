#include <stdio.h>

int main(){
   char str[20];
   char *p;
   int i;

   printf("enter string:\n");
   scanf("%s",str);

   p=str;

   for(i=0;*(p+i)!='\0';i++){
     printf("%c ",*(p+i));
   }

   return 0;
}

