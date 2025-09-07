//Reverse String

#include <stdio.h>

int main(){
   char s[50],rev[50];
   int i,j,len=0;
   scanf("%s",s);
   for(i=0;s[i]!='\0';i++) len++;
   j=0;
   for(i=len-1;i>=0;i--){
      rev[j]=s[i];
      j++;
   }
   rev[j]='\0';
   printf("reverse=%s\n",rev);
   return 0;
}

