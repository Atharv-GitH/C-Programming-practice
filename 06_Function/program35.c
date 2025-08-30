#include <stdio.h>

int power(int b,int e){
   int i,res=1;
   for(i=1;i<=e;i++) res=res*b;
   return res;
}

int main(){
   int b,e;
   scanf("%d%d",&b,&e);
   printf("ans=%d\n",power(b,e));
   return 0;
}

