#include <stdio.h>

void swapValue(int a,int b){
   int t=a;
   a=b;
   b=t;
   printf("inside swapValue: a=%d b=%d\n",a,b);
}

void swapRef(int *a,int *b){
   int t=*a;
   *a=*b;
   *b=t;
   printf("inside swapRef: *a=%d *b=%d\n",*a,*b);
}

int main(){
   int x=5,y=10;

   swapValue(x,y);
   printf("after swapValue: x=%d y=%d\n",x,y);

   swapRef(&x,&y);
   printf("after swapRef: x=%d y=%d\n",x,y);

   return 0;
}

