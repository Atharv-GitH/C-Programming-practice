// Count Vowels & Consonants

#include <stdio.h>

int main(){

   char s[100];
   int v=0,c=0,i;
   fgets(s,100,stdin);
   for(i=0;s[i]!='\0';i++){
      if(s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;
      if(s[i]>='a' && s[i]<='z'){
         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') v++;
         else c++;
      }
   }
   printf("vowels=%d consonants=%d\n",v,c);
   return 0;
}

