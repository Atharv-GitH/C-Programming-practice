#include <stdio.h>

int reverse(int n){
   int rev=0;
   for(;n!=0;n=n/10){
      rev=rev*10+n%10;
   }
   return rev;
}

int main(){
   int n;
   scanf("%d",&n);
   printf("rev=%d\n",reverse(n));
   return 0;
}

