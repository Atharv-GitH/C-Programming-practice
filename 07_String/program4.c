//String Copy (manual)

#include <stdio.h>

int main(){

   char s1[50],s2[50];

   int i;

   scanf("%s",s1);

   for(i=0;s1[i]!='\0';i++){
      s2[i]=s1[i];
   }

   s2[i]='\0';
   printf("copied=%s\n",s2);
   return 0;
}

