#include <stdio.h>

int max(int a,int b){
   if(a>b) return a;
   else return b;
}

int main(){
   int x,y;
   scanf("%d%d",&x,&y);
   printf("max=%d\n",max(x,y));
   return 0;
}

