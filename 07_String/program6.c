//String Concatenation (manual)

#include <stdio.h>

int main(){
   char a[50],b[50];
   int i,j;
   scanf("%s%s",a,b);
   for(i=0;a[i]!='\0';i++);
   for(j=0;b[j]!='\0';j++){
      a[i]=b[j];
      i++;
   }
   a[i]='\0';
   printf("concat=%s\n",a);
   return 0;
}

