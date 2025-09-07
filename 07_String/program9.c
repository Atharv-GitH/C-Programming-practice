//Count Words in Sentence

#include <stdio.h>

int main(){
   char s[200];
   int i,count=1;
   fgets(s,200,stdin);
   for(i=0;s[i]!='\0';i++){
      if(s[i]==' '||s[i]=='\n') count++;
   }
   printf("words=%d\n",count);
   return 0;
}

