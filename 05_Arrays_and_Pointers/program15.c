#include <stdio.h>

int main(){
   int x=20;
   int *p;
   int **q;

   p=&x;
   q=&p;

   printf("x=%d\n",x);
   printf("*p=%d\n",*p);
   printf("**q=%d\n",**q);

   return 0;
}

