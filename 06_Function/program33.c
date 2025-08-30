#include <stdio.h>

void swap(int *x,int *y){
   int t=*x;
   *x=*y;
   *y=t;
}

int main(){
   int a=5,b=7;
   swap(&a,&b);
   printf("a=%d b=%d\n",a,b);
   return 0;
}

