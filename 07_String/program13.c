// Remove Spaces from String  

#include <stdio.h>

int main(){
   char s[100];
   int i,j=0;
   fgets(s,100,stdin);
   for(i=0;s[i]!='\0';i++){
      if(s[i]!=' ') {
         s[j]=s[i];
         j++;
      }
   }
   s[j]='\0';
   printf("after removing spaces: %s\n",s);
   return 0;
}

