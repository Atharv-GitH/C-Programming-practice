#include <stdio.h>

int square(int n){
   return n*n;
}

int main(){
   int a;
   scanf("%d",&a);
   printf("square=%d\n",square(a));
   return 0;
}

