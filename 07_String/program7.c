//Palindrome Check

#include <stdio.h>

int main(){
   char s[50];
   int i,j,flag=1;
   scanf("%s",s);
   for(i=0;s[i]!='\0';i++);
   j=i-1;
   for(i=0;j>i;i++,j--){
      if(s[i]!=s[j]){
         flag=0;
         break;
      }
   }
   if(flag) printf("palindrome\n");
   else printf("not palindrome\n");
   return 0;
}

