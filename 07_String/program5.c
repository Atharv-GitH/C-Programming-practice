// String Compare (manual)

#include <stdio.h>

int main(){
   char a[50],b[50];
   int i,flag=0;
   scanf("%s%s",a,b);
   for(i=0;a[i]!='\0' && b[i]!='\0';i++){
      if(a[i]!=b[i]){
         flag=1;
         break;
      }
   }
   if(flag==0 && a[i]=='\0' && b[i]=='\0') printf("equal\n");
   else printf("not equal\n");
   return 0;
}

