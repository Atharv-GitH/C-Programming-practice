#include <stdio.h>

int getNum(){
   int x;
   printf("enter number:\n");
   scanf("%d",&x);
   return x;
}

int main(){
   int n=getNum();
   printf("value=%d\n",n);
   return 0;
}

