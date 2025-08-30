#include <stdio.h>

void printStr(char s[]){
   int i;
   for(i=0;s[i]!='\0';i++){
      printf("%c",s[i]);
   }
}

int main(){
   char name[20];
   scanf("%s",name);
   printStr(name);
   return 0;
}

