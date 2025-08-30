#include <stdio.h>

int add(int a,int b){ return a+b; }
int mul(int a,int b){ return a*b; }

int main(){
   int (*fp)(int,int);
   fp=add;
   printf("sum=%d\n",fp(2,3));

   fp=mul;
   printf("mul=%d\n",fp(2,3));
   return 0;
}

