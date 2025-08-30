#include <stdio.h>

int add(int,int); // function declaration

int main(){
   int a,b;
   scanf("%d%d",&a,&b);
   printf("sum=%d\n",add(a,b));
   return 0;
}

int add(int x,int y){
   return x+y;
}

