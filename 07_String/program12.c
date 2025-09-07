// Convert to Uppercase & Lowercase

#include <stdio.h>

int main(){
   char s[100];
   int i;
   fgets(s,100,stdin);

   printf("uppercase: ");
   for(i=0;s[i]!='\0';i++){
      if(s[i]>='a'&&s[i]<='z') printf("%c",s[i]-32);
      else printf("%c",s[i]);
   }

   printf("\nlowercase: ");
   for(i=0;s[i]!='\0';i++){
      if(s[i]>='A'&&s[i]<='Z') printf("%c",s[i]+32);
      else printf("%c",s[i]);
   }

   return 0;
}

